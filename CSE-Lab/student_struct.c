#include <stdio.h>
typedef struct{
  int age;
  char name[100];
  char department[100];
  float grades[8];
}stu_info;

void printInfo(stu_info stu);

stu_info getInfo();

int main(){
  int i;
  stu_info m[2];
  for(i=0;i<2;i++){
    m[i] = getInfo();
  }
  for(i=0;i<2;i++){
    printInfo(m[i]);
  }
  return 0;
}

void printInfo(stu_info stu){
  int i;
  float gpa=0;
  printf("Name: %s\nAge: %d\nDepartment: %s\nGrades:\n",stu.name,stu.age,stu.department);
  for(i=0;i<8;i++){
    printf("%.1f\n",stu.grades[i]);
    gpa+=stu.grades[i];
  }
  gpa/=8;
  printf("[GPA: %.2f]\n",gpa);
}

stu_info getInfo(){
  int i;
  static stu_info a;
  printf("Enter Your Name: ");
  scanf("%s", a.name);
  printf("Enter Your Age: ");
  scanf("%d", &a.age);
  printf("Enter Your Department: ");
  scanf("%s", a.department);
  for(i=0;i<8;i++){
    printf("Enter your %dth grade: ",i+1);
    scanf("%f", &a.grades[i]);
  }
  return a;
}
