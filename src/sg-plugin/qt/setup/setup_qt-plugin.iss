
; en
#define MyAppName "qt-plugin for sgMap"

#define MyGroupName "sgi-qt"
#define MyAppVersion "1.0.0.1"
#define MyAppVerName "{#MyAppName} {#MyAppVersion}"
#define MyAppPublisher "dounggiduk@gmail.com"
#define MyAppURL "http://sgmap.sgsrc.net"
#define MyAppExeName "sgi-qt.dll"
#define MyAppCopyright "dounggiduk@gmail.com. All rights reserved." 
#define MyVersionInfoVersion "0.1.0.1"

#define MyGISLibName "sgMap"
#define MyGISInstName "Setup_sgMap_v2.0.exe"

[Setup]
AppId={{FEFBAAFC-71C4-4129-B050-DBB84918C0FC}
AppName={#MyAppName}
AppVerName={#MyAppName} v{#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}VersionInfoVersion={#MyVersionInfoVersion}
VersionInfoProductTextVersion={#MyAppVersion}
VersionInfoCopyright={#MyAppCopyright}
DefaultDirName={code:RootPath}\{#MyGroupName}
DefaultGroupName={#MyAppName}
SourceDir=../../../../libs_v100
OutputDir=../../../../setupfile

OutputBaseFilename=Setup_{#MyGroupName}_v{#MyAppVersion}
Compression=lzma2/ultra64
SolidCompression=yes 

[Languages]
Name: en; MessagesFile: "compiler:Default.isl";      
Name: kr; MessagesFile: "compiler:Languages\Korean.isl";      

[Messages]
en.BeveledLabel=English
kr.BeveledLabel=Korean
[Dirs]
Name: "{app}\Bin32"
Name: "{app}\Config"

[Files]
; application      
Source: "Win32\sgi-qt.dll"; DestDir: "{app}\Bin32"; Flags: ignoreversion
Source: "x64\sgi-qt.dll"; DestDir: "{app}\Bin64"; Flags: ignoreversion; Check: IsX64 
Source: "..\src\sg-plugin\qt\config\*";  DestDir: "{app}\Config";  Flags: recursesubdirs createallsubdirs ignoreversion; Permissions: everyone-full; 
[Icons]
;;en
Name: "{group}\{#MyAppName}"; Filename: "{app}\Bin32\sgi_demo.bat"; Flags: runminimized; WorkingDir: "{app}\Bin32"; Check: IsX32; 
Name: "{group}\{#MyAppName}"; Filename: "{app}\Bin64\sgi_demo.bat"; Flags: runminimized; WorkingDir: "{app}\Bin64"; Check: IsX64; Name: "{group}\{#MyAppName} Uninstall"; Filename: "{uninstallexe}";   Languages:en

Name: "{commondesktop}\{#MyAppName}"; Filename: "{app}\Bin32\sgi_demo.bat"; Flags: runminimized; WorkingDir: "{app}\Bin32"; Check: IsX32; 
Name: "{commondesktop}\{#MyAppName}"; Filename: "{app}\Bin64\sgi_demo.bat"; Flags: runminimized; WorkingDir: "{app}\Bin64"; Check: IsX64; 

[UninstallDelete]
Type: filesandordirs; Name: "{app}\Bin32"
Type: filesandordirs; Name: "{app}\Bin64"; Check: IsX64
Type: filesandordirs; Name: "{app}\Config"
Type: filesandordirs; Name: "{app}"

[Code]
program Setup;

var 
  mLibRootPath : String;
  mLibPath : String;

// check 64-bit processor
function IsX64: Boolean;
begin
  Result := (ProcessorArchitecture = paX64);
end;

// check 64-bit processor
function IsX32: Boolean;
begin
  Result := (ProcessorArchitecture = paX86);
end;

// search for the default installation path
function RootPath(Param: String): String;
begin
  if(ProcessorArchitecture = paX64) then
    Result := ExpandConstant('{pf64}')
  else
    Result := ExpandConstant('{pf32}');
end;

function CheckSerial(Serial: String): Boolean;
var
    cntDash : Integer;
    i:Integer;
begin
  cntDash := 0;
  begin
    for i:= 1 to Length(Serial) do
      if Serial[i] = '-' then
        cntDash := cntDash + 1;
      if (cntDash = 11) and (Length(Serial) > 50) then
        Result := True
      else
        Result := False;
  end
end;

function GetLibraryPath(): String;
var
  path: string;
  regroot: Integer;
  regpath: string;
begin
  if ('' <> mLibPath) then 
  begin
    Result := mLibPath;
    exit;
  end; 
  regroot := HKEY_LOCAL_MACHINE;
  regpath := 'SOFTWARE\{#MyGISLibName}';

  if not RegQueryStringValue(regroot, regpath, 'InstallPath', path) then 
  begin
    Result := '';
    exit;
  end;
  mLibRootPath := path;
  if IsX64() = true then
  begin
    mLibPath := mLibRootPath + '\Bin64';
  end else
  begin
    mLibPath := mLibRootPath + '\Bin32';
  end;
  Result := mLibPath;
 end;

function CreateIconFile(OrgPlugName: String): boolean;
var
  pathName : string;
  fileName : string;
  lines : TArrayOfString;
begin
  Result := true;
  if IsX64() = true then
  begin
    pathName := ExpandConstant('{app}\Bin64');
  end else
  begin
    pathName := ExpandConstant('{app}\Bin32');
  end;
  fileName := pathName + '\' + OrgPlugName + '.bat';
  Log(fileName);
  SetArrayLength(lines, 4);

  lines[0] := '@echo off';
  lines[1] := 'set GISROOT=' + mLibPath;
  lines[2] := 'PATH %GISROOT%;%PATH%';
  lines[3] := 'start sgMapper.exe -SG_PLUGIN_PATH "' + pathName + '"';
  Result := SaveStringsToFile(filename,lines,false);
end;

procedure CheckRunTimeInstaller;
var
  ResultCode : integer;
begin
  if GetLibraryPath() = '' then
  begin
    Log(ExpandConstant('{userinfoserial}'));
    if not Exec(GetCurrentDir() + '\{#MyGISInstName}', ' /SP /COMPONENTS="extension\app" /LANG=' + ActiveLanguage(), '', SW_SHOWNORMAL, ewWaitUntilTerminated, ResultCode) then
      MsgBox('GIS 런타임을 설치하지 못했습니다!' + #13#10 + SysErrorMessage(ResultCode), mbError, MB_OK);
    GetLibraryPath();
  end;
  Log(mLibPath);   
end;

procedure CurPageChanged(CurPageID: Integer);
begin
  case CurPageID of
    wpReady:
      begin
        CheckRunTimeInstaller();
      end;
  end;
end;
procedure CurStepChanged(CurStep: TSetupStep);
begin
  case CurStep of
  ssInstall:
    begin
    end;
  ssPostInstall:
    begin
      CreateIconFile('sgi_demo');
    end;
  end;
end;
