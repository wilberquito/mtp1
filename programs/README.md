# Compile & execute

C++ is a compiled language. That means that to get a program to run, you must
first translate it from the human-readable form to something a machine can
“understand.” That translation is done by a program called a compiler.

What you read and write is called source code (usually it’s in an English-like
language like C++), and what the computer executes is called executable, object
code, or machine code (a machine language).

Typically C++ source code files are given the suffix:

- .cpp (ex: hello.cpp) or
- .h (ex: std_lib_facilities.h).

## Compile

```bash
g++ hello.cpp -o hello
```

A compiler translates the C++ program into machine language code which it
stores on the disk as a file with the extension .o (e.g. hello.o). A linker
then links the object code with standard library routines that the program may
use and creates an executable image which is also saved on disk, usually as a
file with the file name without any extension (e.g. hello).

## Execute

The executable is loaded from the disk to memory and the computer’s CPU
(Central Processing Unit) executes the program one instruction at a time.

```bash
./hello
```
