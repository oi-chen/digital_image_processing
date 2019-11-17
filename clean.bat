@echo off
:Run it to clean up generated temporary files.
del /q Makefile .qmake.stash 1>nul 2>nul
rd /s/q build\moc build\obj build\rcc build\ui 1>nul 2>nul
echo All intermediate files have been cleaned up!
pause