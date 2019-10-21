# Memory Management
---

> malloc(bytes) ---> returns a pointer to a contiguous block of memory that is size of bytes.
> calloc(num_items, item_size) ---> returns a pointer to a contiguous block of memory that has num_items items, each size item_size bytes. Typically used for arrays, structures, and other derived data types. The allocated memory initialized to 0.
> realloc(ptr, bytes) ---> Resizes the memory pointed by ptr to size bytes. The newly allocated memory is not initialized.
> free(ptr) ---> Releases the block of memory pointed to by ptr.

```c
#include <stdio.h>
#include <stdlib.h>
int main(){
  int *ptr;
  ptr = malloc(10*sizeof(*ptr));
  if(ptr!=NULL){
    *(ptr+2) = 50; // Assigns 50 to 3rd integer.
  }
  ptr = realloc(ptr,100*sizeof(*ptr)); // Expanded to 100
  *(ptr+30) = 75;
  printf("%d;%d", *(ptr+2), *(ptr+30));
  free(ptr); // Releases memory
  return 0;
}
```

> Output: 50;75

## Allocating Memory for Strings

```c
char str20[20];
char *str = NULL;
strcpy(str20, "12345");
str = malloc(strlen(str20)+1)); // +1 for null char
strcpy(str, str20);
printf("%s",str);
```

> Output: 12345

## Dynamic Arrays

```c
typedef struct{
  int *elements;
  int size;
  int cap;
}dyn_array;
dyn_array arr;

// Initialization
arr.size = 0;
arr.elements = calloc(1, sizeof(*arr.elements));
arr.cap = 1;

// Expand
arr.elements = realloc(arr.elements, (5+arr.cap) * sizeof(*arr.elements));
if(arr.elements!=NULL)
  arr.cap+=5; // Increase capacity
if(arr.size<arr.cap){ // Adding an element to the array increases size
  arr.elements[arr.size]=50;
  arr.size++;
}else{
  printf("Need to expand the array.");
}
```
