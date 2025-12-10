# Programming Notebooks

## C

### Introduction
As I delve into C, the _lingua franca_ of programming, I find that the language is really helping me understand Python—and programming in general—much better. So far, I am really enjoying C!

This work-in-progress repository, a hobby, contains my solutions to the exercises of the classic book "_C Programming: A Modern Approach, 2nd Edition_", by K. N. King.

## How to run the code
On Terminal (UNIX), compile the desired exercise with the GNU compiler:
```
$ gcc -ansi <filename>.c
```
And execute using:
```
$ ./a.out
```
### Example
To run the first exercise, open Terminal and, while in the same folder, digit (omitting the `$` prompt):
```
$ gcc -ansi 1-01.c
$ ./a.out
```
The first command, `gcc -ansi 1.01.c`, compiles file `1-01.c` according to the ANSI standard, the same used in the book. On macOS, there exists a faster version, `cc -ansi 1.01.c`. The command generates output `a.out` in the same folder. `a.out` is replaced every time a new program is run. To execute it, it is necessary to include `./`, which locates the file is in the same folder.

The program:
```c
#include <stdio.h>

main()    /* Print hello, world */
{
    printf("hello, world\n");
}
```
Prints:
```
hello, world
```

## Exercises

| **Chapter** | | **Chapter** | |
|:---:|:---|:---:|:---|
| **1** | Introducing C | **15** | Writing Large Programs |
| **2** | C Fundamentals | **16** | Structures, Unions, and Enumerations |
| **3** | Formatted Input/Output | **17** | Advanced Uses of Pointers |
| **4** | Expressions | **18** | Declarations |
| **5** | Selection Statements | **19** | Program Design |
| **6** | Loops | **20** | Low-Level Programming |
| **7** | Basic Types | **21** | The Standard Library |
| **8** | Arrays | **22** | Input/Output |
| **9** | Functions | **23** | Library Support for Numbers and Character Data |
| **10** | Program Organization | **24** | Error Handling |
| **11** | Pointers | **25** | Internal Features |
| **12** | Pointers and Arrays | **26** | Miscellaneous Library Functions |
| **13** | Strings | **27** | Additional C99 Support for Mathematics |
| **14** | The Preprocessor | | |
