@echo off
echo Set sapi = CreateObject("SAPI.SpVoice") > spell_moo.vbs
echo sapi.Speak "Mooooooo" >> spell_moo.vbs
cscript spell_moo.vbs
del spell_moo.vbs
