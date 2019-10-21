# Arrays
---

> Ex:
```c
#include <stdio.h>
int main(){
  float prices[5] = {3.2,6.55,10.49,1.25,0.99}; // you can only initialize like this syntax when first declared.
  // giving size is optional here as it will already assing according to initializer list. 
  return 0;
}
```

## Two Dimensional Arrays

> Ex:
```c
#include <stdio.h>
int main(){
  int a[2][3] = {
    {3,2,6},
    {4,5,8}
  }; // you can only initialize like this syntax when first declared.
  a[1][2] = 20;
  return 0;
}
```