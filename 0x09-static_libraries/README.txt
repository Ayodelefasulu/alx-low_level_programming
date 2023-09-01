This readme explains the process of creating, indexing and using a c program library.

1. include all the function prototypes in the header files.
2. first create object files ('.o') of the source file to be compiled as a library
3. run the "ar -rc libmy.a" command to create a library archive
4. run the "ranlib libmy.a" command to index the archive.
5. run the "ar -t libmy.a" command: this list the indexes of the archive.
6. run the "nm libmy.a" command: this lists the symbols (functions and variables) defined in the library
7. use the library in another program: compile the libmy.a with main.c of the program you want to use it in by using the -l flag:

	gcc -o myprogram main.c -L. -lmy
		or
	gcc main.c -L -lmy -o myprogram
	
	This will create an executable file named myprogram that links to the library libmy.a

