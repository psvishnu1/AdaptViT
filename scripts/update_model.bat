@echo off
REM ==============================================================================
REM update_model.bat
REM
REM Runs the three post-processing scripts on the TVM-generated C files to add
REM runtime-configurable pruning support. Must be run once per model after TVM
REM exports the C archive and before compiling for the RISC-V target.
REM
REM The three scripts and what they patch:
REM   update_tvmgen.py  — adds mlp_masks, head_masks, classifier fields to
REM                        the tvmgen_default_inputs struct in tvmgen_default.h
REM   update_lib0.py    — extends tvmgen_default_run() to inject classifier
REM                        weights/bias at runtime and pass mask pointers to
REM                        __tvm_main__ (default_lib0.c)
REM   update_lib1.py    — restructures all dense_pack and batch_matmul kernels
REM                        with mask-based skip logic (default_lib1.c)
REM
REM Expected folder layout (relative to this .bat file):
REM   update_model.bat          ← this file
REM   update_tvmgen.py
REM   update_lib0.py
REM   update_lib1.py
REM   config_vit_small.txt      ← or config_vit_base.txt etc.
REM   codegen\host\include\tvmgen_default.h
REM   codegen\host\src\default_lib0.c
REM   codegen\host\src\default_lib1.c
REM
REM To switch models: change CONFIG_FILE below and re-run.
REM The scripts edit the files in-place — originals are overwritten.
REM ==============================================================================

echo ============================================
echo    TVM Code Updater for Pruned ViT Models
echo ============================================

REM ========================== CONFIGURATION ==========================
REM ←←← CHANGE THIS LINE WHEN SWITCHING TO ANOTHER MODEL ←←←
set CONFIG_FILE=config_vit_small.txt

echo Using config file : %CONFIG_FILE%
echo.

REM ========================== PATH DEFINITIONS ==========================
set TVMGEN_HEADER=codegen\host\include\tvmgen_default.h
set LIB0_FILE=codegen\host\src\default_lib0.c
set LIB1_FILE=codegen\host\src\default_lib1.c
set CONFIG_PATH=%CONFIG_FILE%

REM ========================== VALIDATION ==========================
if not exist "%CONFIG_PATH%" (
    echo ERROR: Config file "%CONFIG_PATH%" not found!
    echo Make sure the config file is in the same folder as this .bat file.
    pause
    exit /b 1
)

if not exist "update_tvmgen.py" (
    echo ERROR: update_tvmgen.py not found!
    pause
    exit /b 1
)
if not exist "update_lib0.py" (
    echo ERROR: update_lib0.py not found!
    pause
    exit /b 1
)
if not exist "update_lib1.py" (
    echo ERROR: update_lib1.py not found!
    pause
    exit /b 1
)

if not exist "%TVMGEN_HEADER%" (
    echo ERROR: tvmgen_default.h not found at %TVMGEN_HEADER%
    pause
    exit /b 1
)
if not exist "%LIB0_FILE%" (
    echo ERROR: default_lib0.c not found at %LIB0_FILE%
    pause
    exit /b 1
)
if not exist "%LIB1_FILE%" (
    echo ERROR: default_lib1.c not found at %LIB1_FILE%
    pause
    exit /b 1
)

REM ========================== UPDATE PROCESS ==========================

echo Step 1: Updating tvmgen_default.h ...
python update_tvmgen.py "%TVMGEN_HEADER%" "%TVMGEN_HEADER%"

echo Step 2: Updating default_lib0.c ...
python update_lib0.py "%LIB0_FILE%" "%CONFIG_PATH%" "%LIB0_FILE%"

echo Step 3: Updating default_lib1.c ...
python update_lib1.py "%LIB1_FILE%" "%LIB1_FILE%" "%CONFIG_PATH%"

echo.
echo ============================================
echo SUCCESS: All updates completed!
echo Updated files:
echo    - %TVMGEN_HEADER%
echo    - %LIB0_FILE%
echo    - %LIB1_FILE%
echo Using configuration: %CONFIG_FILE%
echo ============================================

echo.
echo Final file sizes:
dir "%TVMGEN_HEADER%" "%LIB0_FILE%" "%LIB1_FILE%"

pause