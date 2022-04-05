function blkStruct = slblocks
%SLBLOCKS Defines the block library for a specific Toolbox or Blockset.

% Copyright 1994-2002 The MathWorks, Inc. 
% $Revision: 1.12 $

% Name of the subsystem which will show up in the SIMULINK Blocksets
% and Toolboxes subsystem.
% Example:  blkStruct.Name = 'DSP Blockset';
blkStruct.Name = 'VEMAC created Abstraction Library';

% The function that will be called when the user double-clicks on
% this icon.
% Example:  blkStruct.OpenFcn = 'dsplib';
blkStruct.OpenFcn = 'my_libvera_library';

blkStruct.MaskDisplay = 'disp(''VEMAC created Abstraction Lib'')';

% The argument to be set as the Mask Display for the subsystem.  You
% may comment this line out if no specific mask is desired.
% Example:  blkStruct.MaskDisplay = 'plot([0:2*pi],sin([0:2*pi]));';
% No display for now.
%blkStruct.MaskDisplay = '';
%blkStruct.IsFlat  = 0;% Is this library "flat" (i.e. no subsystems)?

% Information for Simulink Library Browser
Browser(1).Library = 'vera_library';
Browser(1).Name    = 'VEMAC created Abstraction Library';
Browser(1).IsFlat  = 0;% Is this library "flat" (i.e. no subsystems)?

blkStruct.Browser = Browser;

% End of blocks


