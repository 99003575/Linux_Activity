# Linux_Activity_1

# Case Study - Design & Link with Libraries

## Step-0 Preparation
* Develop the following functions in respective source files, in a subdir called `src`
  * mystrlen, mystrcpy, mystrcat, mystrcmp  
  * factorial, isPrime, isPalindrome, vsum
  * set, reset, flip, query 
* Provide prototypes in different header files, in a subdir called `include`
  * mystring.h, myutils.h, bitmask.h
* Write a simple test code to invoke above functions, say `test.c`

### Step-1A : Simple Makefile
* Write a simple Makefile, assuming all files are in same location

### Step-1B : Simple Makefile
* Develop the makefile to compile all source files and link with test code
* Ensure that source files are in subdir `src` and header files are in subdir `include`
* Optionally you may further classify files under `src` into three more subdirs.

### Step-2 : Static Libraries
* Generate 3 static libraries
  * libmystr.a with string functions
  * libmyutils.a with utility functions
  * libmasking.a with bit introspection functions
* Link the static libraries with test code
* Test the statically linked executable
* Analyse all intermediate, final outcome as per the discussion in session

### Step-3 : Dynamic Libraries
* Generate 3 shared object files
  * libmystr.so with string functions
  * libmyutils.so with utility functions
  * libmasking.so with bit introspection functions
* Link the shared libraries with test code
* Test the dynamically linked executable
* Analyse all intermediate, final outcome as per the discussion in session

### Hints
* vsum - a function which take variable no.of arguments
* use va_list, va_arg, va_start,va_end from stdarg.h for the implementation
  ```
  vsum(2,10,20); 
  vsum(3,10,12,18);
  vsum(4,10,12,18,20);
  ```
