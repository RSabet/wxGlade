; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

; define own variables
#define DIST_DIR        "..\..\bdist"
#define PRODUCT_VERSION "0.6.4rc4"

[Setup]
AppName=wxGlade
AppVerName=wxGlade {#PRODUCT_VERSION}
AppPublisher=the wxGlade team
AppPublisherURL=http://wxglade.sourceforge.net
AppSupportURL=http://wxglade.sourceforge.net
AppUpdatesURL=http://wxglade.sourceforge.net
DefaultDirName={pf}\wxGlade
DefaultGroupName=wxGlade
AllowNoIcons=yes
ChangesAssociations=yes
OutputBaseFilename=wxGlade-SAE-{#PRODUCT_VERSION}-setup
OutputDir="..\..\dist"

[Tasks]
Name: "desktopicon"; Description: "Create a &desktop icon"; GroupDescription: "Additional icons:"
Name: "quicklaunchicon"; Description: "Create a &Quick Launch icon"; GroupDescription: "Additional icons:"; Flags: unchecked

[Files]
Source: "{#DIST_DIR}\*"; DestDir: "{app}"; Flags: ignoreversion recursesubdirs
; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[INI]
Filename: "{app}\wxglade.url"; Section: "InternetShortcut"; Key: "URL"; String: "http://wxglade.sourceforge.net"

[Icons]
Name: "{group}\wxGlade"; Filename: "{app}\wxglade.exe"; IconFilename: "{app}\icons\wxglade.ico"
Name: "{group}\Home page"; Filename: "{app}\wxglade.url"
Name: "{group}\Uninstall wxGlade"; Filename: "{uninstallexe}"
Name: "{userdesktop}\wxGlade"; Filename: "{app}\wxglade.exe"; Tasks: desktopicon; IconFilename: "{app}\icons\wxglade.ico"; WorkingDir: "{app}"
Name: "{userappdata}\Microsoft\Internet Explorer\Quick Launch\wxGlade"; Filename: "{app}\wxglade.exe"; Tasks: quicklaunchicon; IconFilename: "{app}\icons\wxglade.ico"; WorkingDir: "{app}"

[Run]
Filename: "{app}\wxglade.exe"; Description: "Launch wxGlade"; Flags: nowait postinstall skipifsilent; WorkingDir: "{app}"

[UninstallDelete]
Type: files; Name: "{app}\wxglade.url"

[Registry]
Root: HKCR; Subkey: ".wxg"; ValueType: string; ValueName: ""; ValueData: "wxGladeResourceFile"; Flags: uninsdeletevalue
Root: HKCR; Subkey: "wxGladeResourceFile"; ValueType: string; ValueName: ""; ValueData: "wxGlade Resource File"; Flags: uninsdeletekey
Root: HKCR; Subkey: "wxGladeResourceFile\shell\open\command"; ValueType: string; ValueName: ""; ValueData: """{app}\wxglade.exe"" ""%1"""
Root: HKCR; Subkey: "wxGladeResourceFile\DefaultIcon"; ValueType: string; ValueName: ""; ValueData: "{app}\icons\wxg_file.ico"
