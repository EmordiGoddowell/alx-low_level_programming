This project is for libraries in c which are the static and shared(dynamic) libraries.

Static Libraries
The static library, also known as an archive, is a collection of pre-compiled object files that have been linked together. These object files typically contain functions, variables, and other code that can be used in a program.

compiling a static library:
gcc -c file1.c file2.c file3.c

Archive the Object Files:
ar rcs libYourLibrary.a file1.o file2.o file3.o

Cross-checking your files:
nm -g libYourLibrary.a

Shared Libraries:
A shared library, also known as a dynamic library, is a file containing compiled code that can be loaded and executed by a program at runtime. Unlike static libraries, shared libraries are not incorporated into the final executable during compilation.

Compile Source Files with Position-Independent Code (PIC):
gcc -fPIC -c file1.c file2.c file3.c

Create the Shared Library:
gcc -shared -o libYourLibrary.so file1.o file2.o file3.o

Set Library Path (Optional):
If you want to use the library without installing it system-wide, you can set the library path temporarily. This can be done using:
export LD_LIBRARY_PATH=/path/to/directory/containing/library:$LD_LIBRARY_PATH

Cross-checking Your files:
nm -g libYourLibrary.so
