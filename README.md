# Programming Notebooks

## C

### Introduction
As I delve into C, the _lingua franca_ of programming, I find that the language is really helping me understand Python—and programming in general—much better. So far, I am really enjoying C!

This repository, a hobby, contains my solutions to the exercises of the classic C book "_C Programming: A Modern Approach, 2nd Edition_", by K. N. King.

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
### Chapter 1

<table>
    <tr>
        <td align="left" width="50"><b>Exercise</b>
        </td>
        <td align="left" width="50"><b>Difficulty</b>
        </td>
        <td align="left" width="750"><b>Description</b>
        </td>
    </tr>
    <tr>
    </tr>
    <tr>
        <td align="center">
        <b><a href="https://github.com/federicomariamassari/C-exercises/blob/master/exercises/chapter-1/1-01.c">1-01</a href></b>
        </td>
        <td align="center">⭐︎
        </td>
        <td>
        Run the "hello, world" program on your system.
        </td>
    </tr>
    <tr>
    </tr>
    <tr>
        <td align="center">
        <b><a href="https://github.com/federicomariamassari/C-exercises/blob/master/exercises/chapter-1/1-03.c">1-03</a href></b>
        </td>
        <td align="center">⭐︎
        </td>
        <td>
        Modify the temperature conversion program to print a heading above the table.
        </td>
    </tr>
    <tr>
    </tr>
    <tr>
        <td align="center">
        <b><a href="https://github.com/federicomariamassari/C-exercises/blob/master/exercises/chapter-1/1-04.c">1-04</a href></b>
        </td>
        <td align="center">⭐︎
        </td>
        <td>
        Write a program to print the corresponding Celsius to Fahrenheit table.
        </td>
    </tr>
    <tr>
    </tr>
    <tr>
        <td align="center">
        <b><a href="https://github.com/federicomariamassari/C-exercises/blob/master/exercises/chapter-1/1-05.c">1-05</a href></b>
        </td>
        <td align="center">⭐︎
        </td>
        <td>
        Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0.
        </td>
    </tr>
    <tr>
    </tr>
    <tr>
        <td align="center">
        <b><a href="https://github.com/federicomariamassari/C-exercises/blob/master/exercises/chapter-1/1-06.c">1-06</a href></b>
        </td>
        <td align="center">⭐︎
        </td>
        <td>
        Verify that the expression <code>getchar() != EOF</code> is 0 or 1.
        </td>
    </tr>
    <tr>
    </tr>
    <tr>
        <td align="center">
        <b><a href="https://github.com/federicomariamassari/C-exercises/blob/master/exercises/chapter-1/1-07.c">1-07</a href></b>
        </td>
        <td align="center">⭐︎
        </td>
        <td>
        Write a program to print the value of EOF (end of file).
        </td>
    </tr>
    <tr>
    </tr>
    <tr>
        <td align="center">
        <b><a href="https://github.com/federicomariamassari/C-exercises/blob/master/exercises/chapter-1/1-08.c">1-08</a href></b>
        </td>
        <td align="center">⭐︎
        </td>
        <td>
        Write a program to count blanks, tabs, and newlines.
        </td>
    </tr>
    <tr>
    </tr>
    <tr>
        <td align="center">
        <b><a href="https://github.com/federicomariamassari/C-exercises/blob/master/exercises/chapter-1/1-09.c">1-09</a href></b>
        </td>
        <td align="center">⭐︎⭐︎
        </td>
        <td>
        Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
        </td>
    </tr>
    <tr>
    </tr>
    <tr>
        <td align="center">
        <b><a href="https://github.com/federicomariamassari/C-exercises/blob/master/exercises/chapter-1/1-10.c">1-10</a href></b>
        </td>
        <td align="center">⭐︎
        </td>
        <td>
        Write a program to copy its input to its output, replacing each tab by <code>\t</code>, each backspace by <code>\b</code>, and each backslash by <code>\\</code>. This makes tabs and backspaces visible in an unambiguous way.
        </td>
    </tr>
</table>
