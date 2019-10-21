# Pointers
---

> Ex:
```c
#include <stdio.h>
int main(){
  int a;
  int b = &a; //address of a
  return 0;
}
```

> Ex:
```c
#include <stdio.h>
void test(int k);
int main(){
  int i = 0;
  printf("The address of i is %x\n",&i); // x format specifier for hexadecimal
  test(i);
  return 0;
}
void test(int k){
  printf("The address of k is %x\n",&k); // x format specifier for hexadecimal
}
```
> Output:
> The address of i is 846dd754
> The address of k is 846dd758

>  Also there is p format specifier for pointers.

> Ex:
```c
#include <stdio.h>
int main(){
  int j = 63;
  int *p = NULL; // Pointer should be intialized to NULL until they are assigned a valid location.
  p = &j;
  printf("The address of j is %x\n",&j);
  printf("p contains address %x\n",p);
  printf("The value of j is %d\n",j);
  printf("p is pointing to the value %d\n",*p);
  return 0;
}
```
> Output:
> The address of j is ff3652cc
> p contains address ff3652cc
> The value of j is 63
> p is pointing to the value 63

## Pointers in Expressions

> Ex:
```c
#include <stdio.h>
int main(){
  int x = 5;
  int y;
  int *p = NULL;
  p = &x;
  y = *p + 2; /* y is assigned 7 */
  y += *p; /* y is assigned 12 */
  *p = y; /* x is assigned 12 */
  (*p)++; /* x is incremented to 13 */
  return 0;
}
```

## Pointers and Arrays

> Ex:
```c
#include <stdio.h>
int main(){
  int a[5] = {22,33,44,55,66};
  int *ptr = NULL;
  int i;
  ptr = a; // same as &a[0] address of first element
  for(i = 0;i < 5;i++){
    printf("%d ",*(ptr + i)); // or just use bracket syntax like array
  }
  return 0;
}
```
> Output:
> 22 33 44 55 66

> When a pointer gets incremented it gets incremented by the size of type it points to.

## Pointers and Functions

```c
#include <stdio.h>
void swap(int *num1,int *num2);
int main(){
  int x = 25;
  int y = 100;
  printf("x = %d, y = %d\n",x,y);
  swap(&x,&y);
  printf("x = %d, y = %d\n",x,y);
  return 0;
}
void swap(int *num1,int *num2){
  int temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}
```
> Output:
> x = 25, y = 100
> x = 100, y = 25

## Function Pointers

> Syntax:
> return_type (\*func_name)(parameters)

```c
#include <stdio.h>
void say_hello(int num_times);
int main(){
  void (*funptr)(int); // function pointer
  funptr = say_hello;
  funptr(3);
  return 0;
}
void say_hello(int num_times){
  int k;
  for(k=0;k<num_times;k++){
    printf("Hello\n");
  }
}
```

> Output:
> Hello
> Hello
> Hello

## Array of Function Pointers

```c
// ...
int (*op[4])(int,int);
op[0] = add;
op[1] = sub;
op[2] = mul;
op[3] = div;
a = op[2](3,2); // a = 6
b = op[3](4,2); // b = 2
// ...
```

## The void Pointer

> It can refer to any address type in memory.

```c
int x = 33;
float y = 12.4;
char c = 'a';
void *ptr;
ptr = &x;
printf("%d\n",*((int *)ptr));
ptr = &y;
printf("%f\n",*((float *)ptr));
ptr = &c;
printf("%c\n",*((char *)ptr));
```

> Output:
> 33
> 12.4
> a

> Ex:
> void \* square(const void \*); ---> accepts any data type as argument.
> const is to use data passed in by parameter without changing it.
> allows any value type as return value.

```c
#include <stdio.h>
void *square(const void *num);
int main(){
  int x,sq_int;
  x = 6;
  sq_int = square(&x);
  printf("%d;%d",x,sq_int);
  return 0;
}
void *square(const void *num){
  int result;
  result = (*(int *)num)*(*(int *)num);
  return result;
}
```

> Output:
> 6;36

## Function Pointers as Arguments

> Passing a function pointer to another function as argument. (Callback Function)

> Ex:
> qsort() ---> In stdlib.h. Sorts arrays.
> qsort(void \* base, size_t num, size_t width, const void \*compare)
> compare is a function pointer which has 2 arguments and returns 0 if arg1=arg2, <0 if arg1 before arg2, >0 if arg1 after arg2.
> base is a void pointer to array.
> num is number of elements in array.
> width is the size of an element.

```c
#include <stdio.h>
#include <stdlib.h>
int compare(const void *, const void*);
int main(){
  int arr[5] = {52,23,56,19,4};
  int num,width,i;
  num = sizeof(arr)/sizeof(arr[0]);
  width = sizeof(arr[0]);
  qsort((void *)arr, num, width, compare);
  for(i=0;i<5;i++){
    printf("%d\n",arr[i]);
  }
  return 0;
}
int compare(const void *elem1, const void *elem2){
  if((*(int *)elem1)==(*(int *)elem2)){
    return 0;
  }
  else if((*(int *)elem1)<(*(int *)elem2)){
    return -1;
  }
  else{
    return 1;
  }
}
```

> Output:
> 4
> 19
> 23
> 52
> 56
