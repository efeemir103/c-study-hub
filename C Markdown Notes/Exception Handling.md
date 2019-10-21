# Exception Handling
---

## The exit Command

> exit immediately stops execution of a program and sens an exit code (signal) back to the calling process.

> Note: There are predefined stdlib.h macros EXIT_SUCCESS and EXIT_FAILURE. But typically 0 for success and -1 for failure are used.

## Using errno

> Note: You should set errno to 0 before calling a library function.

```c
#include <stdio.h>
#include <stdlib.h>
extern int errno; // or include errno.h
int main(){
  FILE *fptr;
  int c;
  errno = 0;
  fptr = fopen("C:\\nonexistantfile.txt", "r");
  if(fptr == NULL){
    fprintf(stderr, "Error opening file. Error code: %d\n", errno);
    exit(EXIT_FAILURE);
  }
  fclose(fptr);
  return 0;
}
```

## The perror and strerror Functions

> perror(str) ---> Prints more descriptive message error. In format of str + " : description"
> strerror(errno) ---> Returns a pointer to message text. (string.h) You can use other parameters aswell to observe errors.

```c
FILE *fptr;
errno = 0;
fptr = fopen("C:\\nonexistantfile.txt", "r");
  if(fptr == NULL){
    perror("Error");
    fprintf(stderr, "%s\n", strerror(errno)); // Prints No such file or directory.
    exit(EXIT_FAILURE);
  }
  fclose(fptr);
  return 0;
}
```

## EDOM and ERANGE Error Codes

> Some of the mathemetical functions in the math.h library set errno to defined errno value EDOM when domain is out of range. Similarly, the ERANGE macro value is used when there is a range error.

## The feof and ferror Functions

> feof(fp) ---> Returns a nonzero value if the end of stream has been reached, 0 otherwise. feof also sets EOF.
> ferror(fp) ---> Returns a nonzero value if there is an error, 0 for no error.
