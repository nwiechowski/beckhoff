
set MATLAB=D:\Program Files\MATLAB\R2020b


call  "\\Mindmotiv-Berlin\D$\Program Files\MATLAB\R2020b\bin\win64\checkMATLABRootForDriveMap.exe" "\\Mindmotiv-Berlin\D$\Program Files\MATLAB\R2020b"  > mlEnv.txt
for /f %%a in (mlEnv.txt) do set "%%a"\n

make -f WindowControl.mk MATLAB_ROOT=%MATLAB_ROOT% ALT_MATLAB_ROOT=%ALT_MATLAB_ROOT% MATLAB_BIN=%MATLAB_BIN% ALT_MATLAB_BIN=%ALT_MATLAB_BIN%  MAT_FILE=0 COMBINE_OUTPUT_UPDATE_FCNS=0 INCLUDE_MDL_TERMINATE_FCN=1 MULTI_INSTANCE_CODE=0 OPTS="-DTID01EQ=0"
