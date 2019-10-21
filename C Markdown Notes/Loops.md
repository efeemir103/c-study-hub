# Loops
---

## While Loop

```c
while(1){ // Infinite loop
  //statements
}
```

> Ex:
```c
int num = 5;
while(num > 0){
  num--;
  if(num == 3){
    continue; // 3 is skipped
  }
  printf("%d\n",num);
}
```
> Output:
> 4
> 2
> 1
> 0

## Do-While Loop

```c
do{
  //statements (executed at least once)
}while(1); // Infinite loop
```

## For Loop

```c
int i,j; // Remember this is c no int definitions inside for
for(i = 1;i <= 5;i++){
  for(j = 0;j <= 4;j++){
    printf("%d",i);
  }
  printf("\n"); /* blank line between tables */
}
```
> Output:
> 11111
> 22222
> 33333
> 44444
> 55555