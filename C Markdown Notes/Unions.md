# Unions
---

> Just like structure but member values stored in same memory address. So it can have 1 member at a time.

> Note: Unions used for memory management.

```c
union val{
  int int_num;
  float fl_num;
  char str[20];
};
union val u1;
union val u2;
u2.int_num = 1;
u1 = u2;
u1.int_num = 3;
printf("%d",u2.int_num);
```

> Output: 1

> Note: Union pointers work just like structure pointers.

> Note: Unions can be nested inside structures. But union name is required at the end of declaration.

## Array of Unions

> Syntax: union union_name arr_name\[10];
