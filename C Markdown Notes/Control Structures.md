# Control Structures
---

## If Else Blocks

```c
#include <stdio.h>
int main(){
  int a;
  scanf("%d",&a);
  if(a>100){
    printf("Bigger than 100\n");
  }
  else if(a>50){
    printf("In between 100 and 50\n");
  }
  else{
    printf("Something else\n");
  }
  if(1) // anything that is not 0 is true
    printf("TRUE\n"); // One-liner blocks don't need brackets
  else
    printf("FALSE\n");
  return 0;
}
```

> Note: If-Else blocks can be nested.

## Ternary Operator
---

```c
#include <stdio.h>
int main(){
  int y;
  int x = 3;
  y = (x >= 5) ? 5:x; // Ternary operator
  return 0;
}
```

## Switch Case Blocks
---

```c
#include <stdio.h>
int main(){
  int a;
  scanf("%d",&a);
  
  switch(a){
    case 100:
      printf("It is 100\n");
      break;
    case 50:
      printf("It is 50\n");
      break;
    case 0:
      printf("It is 0\n");
      break;
    default: // Default case don't need a break statement
      printf("Something else\n");
  }
  return 0;
}
```

> Execution will continue until a break statement is reached.

## Logic Operators
---

> && ---> and operator
> || ---> or operator
> ! ---> not operator