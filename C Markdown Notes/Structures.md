# Structures
---

> Composite data type, Aggregate data type.
> Stored in contiguous block of memory.

```c
struct course{
  int id;
  char title[40];
  float hours;
};
struct course java;
struct course c;
struct course javascript = {12, "javascript", 16.5};
```

```c
struct student{
  int age;
  int grade;
  char name[40];
};
struct student s1;
s1 = (struct student) {19, 9, "John"};
struct student s2 = {.grade = 10, .age = 22, "Batman"};
s1.age = 20;
struct student s3 = s2;
```

## Typedef

> Creates a type definition.

```c
typedef struct{
  int id;
  char table[50];
  float hours;
}course;
course cs1;
course cs2;
```

## Nested Struct

```c
typedef struct{
  int x;
  int y;
}point;
typedef struct{
  float radius;
  point center;
}circle;
circle c = {4.5, {1, 3}};
printf("%3.1f;%d;%d",c.radius,c.center.x,c.center.y);
```

> Output:
> 4.5;1;3

## Pointers to Structures

```c
struct myStruct \*struct_ptr; // defines a pointer to the myStruct structure
struct_ptr = &struct_var; // assigns structures address to pointer
struct_ptr->struct_member; // accesses the value of the structure
// same as
(*struct_ptr).struct_member;
```

```c
#include <stdio.h>
#include <string.h>
typedef struct{
  int id;
  char title[40];
  float hours;
}course;
void update_course(course *class);
void display_course(course *class);
int main(){
  course cs2;
  update_course(&cs2);
  display_course(cs2);
  return 0;
}
void update_course(course *class){
  strcpy(class->title, "C++");
  class->id = 111;
  class->hours = 12.30;
}
void display_course(course class){
  printf("%d\t%s\t%3.2f\n", class.id, class.title, class.hours);
}
```

## Array of Structures

```c
#include <stdio.h>
typedef struct{
  int h;
  int w;
  int l;
}box;
int main(){
  box boxes[3] = {{2, 6, 3}, {4, 6, 6}, {2, 6, 9}};
  int k,volume;
  for(k=0;k<3;k++){
    volume=boxes[k].h*boxes[k].w*boxes[k].l;
    printf("box %d volume %d\n", k, volume);
  }
}
```

> Output:
> box 0 volume 96
> box 1 volume 144
> box 2 volume 108
