@echo off
:loop
echo Set sapi = CreateObject("SAPI.SpVoice") > spell_moo.vbs
echo sapi.Speak "Mooooooo" >> spell_moo.vbs
cscript spell_moo.vbs
del spell_moo.vbs
timeout /t 600 /nobreak > nul
goto loop
