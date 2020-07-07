## CPP - Simple Object Source File "Person" And Makefile
The Makefile will create Objects for all the .cpp files in the directory, as well as, can clean the Object Files with `make clean` bash command

To run it
1. Create the objects using bash command : `make`. It will automatically detect all the cpp files in currecnt directory
2. run the target file using bash command : './main'
Output should be :
```
Starting Program
Quazi
John
Quazi
Program Finished
John - Person Object Destroyed
Quazi - Person Object Destroyed
```
