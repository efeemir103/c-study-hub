# Working with Files
---

> stdio.h includes:
> FILE typedef for defining a file pointer
> fopen(filename, mode): Returns a FILE pointer to file filename which is opened using mode. If a file cannot be opened, NULL is returned.

> File modes:
> r ---> reading
> w ---> writing
> a ---> append
> r+ ---> reading and writing from beginning
> w+ ---> reading and writing, overwriting file
> a+ ---> reading, writing and appending to file

> fclose(fptr): Closes file opened with FILE fptr, returning 0 if close was successful, EOF (End of File) is returned if there is an error in closing.

```c
FILE *fptr;
fptr = fopen("myfile.txt","w");
fclose(fptr);
```

> Note: \\ can be used as path backslash.

## Reading from a file

> stdio.h includes:
> fgetc(fptr) ---> Returns the next character from the file pointed by fptr. If the end of file is reached, then EOF is returned. (Which can be handled by EOF macro or -1)
> fgets(buffer, n, fptr) ---> Reads n-1 characters from the file pointed to by fptr and stores the string in buffer. A NULL character('\0') is appended as the last character in buffer. If fgets encounters a newline character or the end file before n-1 characters is reached, then only the characters up to that point are stored in buffer.
> fscanf(fptr, conversion_specifiers, vars) ---> Reads characters from the file pointed to by fptr and assigns input to a list of variable pointers using conversion_specifiers. Stops reading when a space or newline is encountered.

## Writing to a file

> fputc(ch, fp) ---> Writes character ch to the file pointed by fp.
> fputs(str, fp) ---> Writes string str to the file pointed to by fp.
> fprintf(fp, str, vars) ---> Prints string to the file pointed by fp. str can optionally include format specifiers and a list of variables vars.

## Binary File I/O

> File mode options for fopen():
> rb ---> reading. (file is needed to exist)
> wb ---> writing.
> ab ---> appending.
> rb+ ---> reading and writing from beginning.
> wb+ ---> reading and writing, overwriting file.
> ab+ ---> reading and writing, appending to file.

> fwrite(ptr, item_size, num_items, fp) ---> Writes num_items items of item_size size from pointer ptr to the file pointed to by file pointer fp.
> fread(ptr, item_size, num_items, fp) ---> Reads num_items items of item_size size from the file pointed to by ptr.
> fclose(fp) ---> Closes file opened with file fp, returning 0 if close was successful. EOF is returned if there is an error in closing.
> feof(fp) ---> Returns 0 when the end of the file stream has been reached.

```c
FILE *fptr;
int arr[10];
int x[10];
int k;
for(k=0;k<10;k++)
  arr[k] = k;
fptr = fopen("datafile.bin","wb");
fwrite(arr, sizeof(arr[0]), sizeof(arr)/sizeof(arr[0]), fptr); // Writes arr to datafile.bin
fclose(fptr);
fptr = fopen("datafile.bin", "rb");
fread(x, sizeof(arr[0]), sizeof(arr)/sizeof(arr[0]), fptr); // Reads from datafile.bin to x
fclose(fptr);
for(k=0;k<10;k++)
  printf("%d",x[k]);
```

> Note: File extensions do not determine the format of data in a file. Only useful for indicating the type of data to expect.
> Ex:
> .txt ---> text file
> .bin ---> binary data
> .csv ---> comma separeted values
> .dat ---> data file

## Controlling the File Pointer

> ftell(fp) ---> Returns a long int value corresponding to the fp file pointer position by number of bytes from the start of the file.
> fseek(fp, num_bytes, from_pos) ---> Moves the fp file pointer by num_bytes bytes relative to position from_pos, which can be one of the following constants:
> SEEK_SET ---> start of file
> SEEK_CUR ---> current position
> SEEK_END ---> end of file

```c
#include <stdio.h>
typedef struct{
  int id;
}item;
int main(){
  FILE *fptr;
  item first, second, secondf;
  first.id = 10276;
  second.id = 11786;
  fptr = fopen("info.dat", "wb");
  fwrite(&first, 1, sizeof(first), fptr);
  fwrite(&second, 1, sizeof(second), fptr);
  fclose(fptr);
  fptr = fopen("info.dat", "rb");
  fseek(fptr, 1*sizeof(item), SEEK_SET); // Seeks second record and reads into secondf.
  fread(&secondf, 1, sizeof(item), fptr);
  printf("%d\n",secondf.id);
  fclose(fptr);
  return 0;
}
```
