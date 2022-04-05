% startup.m

% try to query the registry for the VEMAC VeRa TC 3.0 installation folder
% and run setMatlabPath.m script which sets MATLAB Path variables necessary
% for the build process
try
    tc_basepath = winqueryreg('HKEY_LOCAL_MACHINE', 'SOFTWARE\VeRa TC 3.0', 'Path');
    run([tc_basepath '\VeRa_Templates\setMatlabPath.m']);
catch
    disp('Error: Path to VEMAC VeRa TC 3.0 could not be determined.')
    disp('Please make sure VeRa TC 3.0 is properly installed.')
end
clear tc_basepath;