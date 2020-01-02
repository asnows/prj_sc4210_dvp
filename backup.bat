
cd prj_sc4210_dvp

@ECHO OFF
FOR %%i IN (Exe, Output, Ship) DO IF EXIST %%i RD %%i /S/Q
FOR %%i IN (EX~, BIN, PLG, DEP, OPT, APS, NCB, TMP, ZIP, LOG, ILK, SIO, ERR, TPU) DO IF EXIST *.%%i DEL *.%%i
FOR %%i IN (G96)DO IF EXIST g96 DEL g96
FOR %%i IN (B00, B01, H00, H01) DO IF EXIST *.%%i DEL *.%%i
FOR %%i IN (Exe, Output, Ship) DO IF EXIST %%i RD %%i /S/Q
FOR %%i IN (EX~, obj, lst, opt, lnp,plg,map,bak,sbr,m51,hex,__i,cfg) DO IF EXIST *.%%i DEL *.%%i


cd ..

set souce=%cd: =:%
set souce=%souce:\= %
for %%j in (%souce%) do (set souce=%%j)
set souce=%souce::= %

set HH="%time:~0,1%"
set HL=%time:~1,1%
if  /i %HH%==" " set HH=0

set year=%date:~0,4%
set month=%date:~5,2%
set day=%date:~8,2%
set Hour=%HH%%HL%
set minute=%time:~3,2%



::set FileName=%souce%_%year%%month%%day%_%Hour%%minute%.rar
set FileName=prj_sc4210_dvp.0.00_%year%%month%%day%_%Hour%%minute%.rar

::WinRAR a %FileName% %souce%
"C:\Program Files\WinRAR\WinRAR.exe" a %FileName% prj_sc4210_dvp
