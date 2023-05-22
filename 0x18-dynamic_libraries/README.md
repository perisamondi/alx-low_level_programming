0x18. C - Dynamic libraries

The main difference from Static Libraries and Dynamic Libraries in Static, the linker makes a copy of all of the selected functions for the library to the executable file and in Dynamic it is not necessary. This means a difference in use of memory but also in risk of data corruption and in how easily the code is handled.
The way to create a Dynamic Library in Linux is with the gcc command using the -c to generate the object files (.o) from the source files (.c) and the -fPIC to make the code position independent. Thus, the following command makes a bunch of .o files from each .c file in the current directory (You can select which functions you want for your library).
