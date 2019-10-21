# Basic Input/Output
---

```c
#include <stdio.h>
int main(){
  printf("Hello World!\n");
  printf("int: %d\n",sizeof(int));
  printf("float: %d\n",sizeof(float));
  printf("double: %d\n",sizeof(double));
  printf("char: %d\n",sizeof(char));
  return 0;
}
```

```c
#include <stdio.h>
#define SOME_MACRO 9
int main(){
  int my_var = 42;
  char ch;
  float fl;
  const double PI = 3.14; //constant var
  char a = getchar();
  char string_a[100];
  gets(string_a); //don't use gets it is dangerous (buffer overflow)
  puts(string_a);
  /*
    Multiline comment
  */
  return 0;
}
```

## Escape Sequences
---
> \n ---> new line
> \t ---> horizontal tab
> \\\ ---> backslash
> \b ---> backspace
> \\' ---> single quote
> \\" --->
> \a ---> beep or sound