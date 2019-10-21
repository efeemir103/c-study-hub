# Strings
---

```c
#include <stdio.h>
int main(){
  char str1[] = "world"; /* size 6 includeing the null char \0 */
  char str2[] = {'h','e','l','l','o','\0'}; /* size 6 */
  char *constant_string = "stuff";
  return 0;
}
```

> Some functions from string.h
> strlen(str_name) ---> gets length of string
> strcat(str1,str2) ---> merges two string (str1 = str1 +str2)
> strcpy(str1,str2) ---> copy one string to another, copies str2 to str1 (str1 = str2)
> strlwr(str) ---> converts to lower case
> strupr(str) ---> converts to upper case
> strrev(str) ---> reverse string
> strcmp(str1,str2) ---> compares two strings
> (returns 0 if equal, positive if lexically greater, negative if lexically before )

> Ex:
```c
#include <stdio.h>
int main(){
  char str[25];
  scanf("%s",str); // no ampersand (&) needed because an array
  return 0;
}
```
> Note: scanf() reads until a terminating newline or space reached.
> You can use \[] brackets to make scanf read a group of characters specified.

> Ex:
```c
#include <stdio.h>
int main(){
  char full_name[50];
  printf("Enter your full name: ");
  gets(full_name);
  return 0;
}
```
> A safer alternative to gets() is fgets()
> fgets() reads up to specified number of char. It reads enter key as \n.

```c
#include <stdio.h>
int main(){
  char full_name[50];
  printf("Enter your full name: ");
  fgets(full_name,50,stdin);
  return 0;
}
```

> Note:
> puts(str) ---> Takes only string argument but it adds a newline to output.
> fputs(str,stdout) ---> File version of puts.

> Ex:
```c
#include <stdio.h>
int main(){
  char info[100];
  char dept[] = "HR";
  int emp = 75;
  sprintf(info,"The %s dept has %d employees.",dept,emp);
  printf("%s\n",info);
  return 0;
}
```
> Output: The HR dept has 75 employees.

> Ex:
```c
#include <stdio.h>
int main(){
  char info[] = "Snoqualmie WA 13190";
  char city[50];
  char state[50];
  int population;
  sscanf(info,"%s %s %d",city,state,&population);
  printf("%d people live in %s %s",population,city,state);
  return 0;
}
```
> 13190 people live in WA Snoqualmie

> String Safe Functions
> strncat(str1,str2,n) ---> Appends first n chars of str2 to end of str1.
> strncpy(str1,str2,n) ---> Copies first n chars of str2 to str1.

> strchr(str1,c) ---> Returns a pointer to first occurence of char c int str1 or NULL if not found.
> strstr(str1,str2) ---> Returns a pointer to the first occurence of str2 in str2 or NULL if not found.

> Converting String to Number
> int atoi(str) ---> Means: ASCII to Integer. Converts str to int. 0 is returned if first char is not a number or no numbers encountered.

> Ex:
> atoi("123") ---> 123 (int)
> atoi("1e23") ---> 1 (int)
> atoi("a123") ---> 0 (int)

> Note: atoi() lacks error handling use strtol() instead.

> double atof(str) ---> Means: ASCII to Float. Converts str to double. 0.0 is returned if first char is not a number or no numbers encountered.

> Ex:
> atof("1.23") ---> 1.230000 (double)
> atof("a1.23") ---> 0.000000 (double)
> atof("1.a23") ---> 1.000000 (double)

> long atol(str) ---> Means: ASCII to Long Integer same as atoi() except for the range.

### Array of Strings

> Ex:
```c
char trip[3][15] = {
  "suitcase",
  "passport",
  "ticket"
};
//or
char *trip[] = {
  "suitcase",
  "passport",
  "ticket"
};
printf("Please bring the following:\n");
int i;
for(i=0;i<3;i++){
  printf("%s\n",trip[i]);
}
```

> Output:
> suitcase
> passport
> ticket

> Note:
> char \*items\[3]; only reserves space for 3 pointers to strings.