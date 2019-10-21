# Preprocessor Directives
---

> The C preprocessor uses the # directives to make substitutions in program source code before compilation.

> Ex: include <stdio.h> is replaced by contents of the stdio.h header file before a program is compiled.
> #include Including header files.
> #define #undef Defining and undefining macros.
> #ifdef, #ifndef, #if, #else, #elif, #endif Conditional compilation.
> #pragma Implementation and compiler specific.
> #error, #warning Output an error or warning message. An error halts compilation.

> Note: Do not put semicolon character at the end of a # directive.

## The #include Directive

> Some useful C libraries:
> stdio ---> standard I/O functions.
> stdlib ---> memory management and other utilities.
> string ---> functions for handling strings.
> errno ---> errno global variable and error code macros.
> math ---> common mathemetical functions.
> time ---> time and date utilities.

> A user-defined header file is also given the .h extension.

```c
#include <stdio.h>
#include "myutil.h" // user-defined header file
```

> Note: Some developers use hpp extension for header files.

## The #define Directive

```c
#include <stdio.h>
#define PI 3.14
#define AREA(r) (PI*r*r) // AREA(arg) ---> PI*arg*arg
int main(){
  float radius = 2;
  printf("%3.2f\n",PI);
  printf("Area is %5.2f\n", AREA(radius));
  printf("Area with radius + 1: %5.2f\n", AREA(radius+1));
  return 0;
}
```

> Output:
> 3.14
> Area is 12.56
> Area with radius + 1: 9.28

> Note: Because first it places in macro like 3.14\*2+1\*2+1
> To fix we should define as (PI\*(r)\*(r))
> Then we would get 28.26 which is true.

## Formatting Preprocessor Directives

> \ continuation character can be used to extend definition over more than one line.

```c
#define VERY_LONG_CONSTANT \
23.678901
#define SQUARE(x) \
x*x
```

## Predefined Macro Definitions

> \_\_DATE\_\_ ---> Current date as a string in the format of MM DD YYYY
> \_\_TIME\_\_ ---> The current time as a string in the format of hh\:mm:ss
> \_\_FILE\_\_ ---> The current filename as a string. (number of source file)(Path)
> \_\_LINE\_\_ ---> The current line number as an int value. (line of statement)
> \_\_STDC\_\_ ---> 1

## The #ifdef, #ifndef, #undef Directives

```c
#include <stdio.h>
#define RATE 0.08
#ifndef TERM
  #define TERM 24
#endif
int main(){
  #ifdef RATE /*This branch will be compiled.*/
    #undef RATE
    printf("Redifining Rate\n");
    #define RATE 0.068
  #else /*This branch will not be compiled*/
    #define RATE 0.068
  #endif
  printf("%f%d\n", RATE, TERM);
  return 0;
}
```

> Output: 
> Redifining Rate
> 0.068 24

```c
#define LEVEL 4
int main(){
  #if LEVEL>6
    /*do something*/
  #elif LEVEL>5
    /*else if branch*/
  #elif LEVEL>4
    /*another else if branch*/
  #else
    /*last option here*/
  #endif
  return 0;
}
```

> Note: There is a defined() preprocessor

```c
#if !defined(LEVEL) // just like #ifndef LEVEl
  /*statements*/
#endif
```

> Note: Difference between #if and if statement is if statement uses data avaible at runtime.

## Preprocessor Operators

#### The \# operator

> The \# macro is called stringification or stringizing operator and tells the preprocessor to convert a parameter to a string constant.

```c
#define TO_STR(x) #x
printf("%s\n",TO_STR(123\\12)); // TO_STR(123+12) would be 123+12
```

> Output: 123\12 Because escape sequence is recognized.

#### The \## operator

> Token pasting operator

```c
#define VAR(name,num) name##num
int x1 = 125;
int x2 = 250;
int x3 = 500;
printf("%d\n",VAR(x,3));
```

> Output: 500
