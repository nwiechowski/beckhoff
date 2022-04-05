% MATLAB/Simulink parameters

energy_save_speed = Simulink.Parameter;
energy_save_speed.RTWInfo.StorageClass = 'ExportedGlobal';
energy_save_speed.DataType = 'double';
energy_save_speed.Min = 0;
energy_save_speed.Max = 255;
energy_save_speed.Description = 'Threshold when driver information should happen';
energy_save_speed.DocUnits = '';
energy_save_speed.Value = 10;

armature_position = Simulink.Parameter;
armature_position.RTWInfo.StorageClass = 'ExportedGlobal';
armature_position.DataType = 'double';
armature_position.Min = 0;
armature_position.Max = 100;
armature_position.Description = 'Window Starting Position';
armature_position.DocUnits = '';
armature_position.Value = 0;

window_speed = Simulink.Parameter;
window_speed.RTWInfo.StorageClass = 'ExportedGlobal';
window_speed.DataType = 'double';
window_speed.Min = 0;
window_speed.Max = 100;
window_speed.Description = 'Window move speed per second';
window_speed.DocUnits = '';
window_speed.Value = 0.25;