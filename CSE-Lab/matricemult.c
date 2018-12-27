#include <stdio.h>

int main(){
  int row1,column1,row2,column2,i,j,k;
  go:
  printf("Enter first matrice\'s rows and columns in order with whitespaces: ");
  scanf("%d %d",&row1,&column1);
  printf("Enter second matrice\'s rows and columns in order with whitespaces: ");
  scanf("%d %d",&row2,&column2);
  if(!(row1==column2&&row2==column1)){
    printf("You cant multiply this matrices.");
    goto go;
  }
  int a[column1][row1],b[column2][row2],c[column2][row1];
  printf("\n");
  for(i=0;i<column2;i++){
    for(j=0;j<row1;j++){
      c[i][j]=0;
    }
  }
  for(i=0;i<column1;i++){
    for(j=0;j<row1;j++){
      scanf("%d",&a[i][j]);
    }
  }
  printf("\n");
  for(i=0;i<column1;i++){
    for(j=0;j<row1;j++){
      scanf("%d",&b[i][j]);
    }
  }
  printf("\n");
  for(i=0;i<column1;i++){
    for(j=0;j<row1;j++){
      printf("[%d] ",a[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for(i=0;i<column2;i++){
    for(j=0;j<row2;j++){
      printf("[%d] ",b[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  for(i=0;i<column2;i++){
    for(j=0;j<row1;j++){
      for(k=0;k<column2;k++){
        c[i][j]+=a[i][k]*b[k][j];
      }
    }
  }
  for(i=0;i<column2;i++){
    for(j=0;j<row1;j++){
      printf("[%d] ",c[i][j]);
    }
    printf("\n");
  }
  return 0;
}
