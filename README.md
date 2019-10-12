# EECS349HW2

2) The only 2 .dll files referenced are KERNEL32.dll and msvcrt.dll.  In msvcrt.dll there are imports for file IO such as fopen, fputs, and fclose giving away that the binary uses file IO.  It also imports strncmp and printf showing that the program does string comparisons and will print to the console.

3.2) The input table for the packed binary imports the same dll's as the unpacked one but msvcrt.dll only imports one API command instead of the dozens in the unpacked one.

3.3) The unpacked input table is the same as the original input table.

4) Virus total showed that only 1 anti-virus software detected the original binary as a threat but after applying packing it increased to 4 anti-virus softwares detecting the binary as a threat.

Virus total thought that my program was a trojan by a lot of av softwares after I obfuscated it so the total went up to 17.