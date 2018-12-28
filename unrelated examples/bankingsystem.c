#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
typedef struct {
    int accountno;
    char name[20];
    float accountvalue;
}data;
void appenddata(data account,char *file);
void deleteaccount(int accountno,char *file);
void transfer(float amount,data *from,data *to);
data *readall(char *file,int accountnum);
int saveall(char *file,data *datas);
int main(){
    char file[9]="datas.txt";
    data test;
    data *datas=calloc(2,sizeof(data));
    test.accountno=1;
    sprintf(test.name,"%s","**Efe*Emir*Pekmez**");
    test.accountvalue=4500.0;
    datas=readall(file,1);
    //printf("%f\n",((datas)->accountvalue));
    appenddata(test,file);
    //datas=readall(file,2);
    //printf("%f\n",((datas+1)->accountvalue));
    return 0;
}
void appenddata(data account,char *file){
    int i=(int)account.accountno;
    int dignum=0;
    FILE *fptr=fopen(file,"a");
    fprintf(fptr,"[{");
    for(;i>0;i/=10){
        dignum++;
    }
    dignum=12-dignum;
    for(;dignum>0;dignum--){
        fprintf(fptr,"%d",0);
    }
    fprintf(fptr,"%d;%20s;",account.accountno,account.name);
    for(i=(int)account.accountvalue;i>0;i/=10){
        dignum++;
    }
    dignum=20-dignum;
    for(;dignum>0;dignum--){
        fprintf(fptr,"%d",0);
    }
    fprintf(fptr,"%.2f}]\n",account.accountvalue);
    fclose(fptr);
}
void deleteaccount(int accountno,char *file){
    int i;
    FILE *fptr=fopen(file,"r+");
    fseek(fptr,0,SEEK_SET);
    fseek(fptr,15+(61)*accountno,SEEK_SET);
    fprintf(fptr,"****NO*****OWNER****;000000000000.00}]");
    fseek(fptr,0,SEEK_SET);
    fclose(fptr);
}
void transfer(float amount,data *from,data *to){
    if(from->accountvalue-amount>=0){
        from->accountvalue-=amount;
        to->accountvalue+=amount;
    }else{
        printf("Not enough sufficient to transfer.");
    }
}
int saveall(char *file,data *datas){
    int i;
    FILE *fptr=fopen(file,"w+");
    for(i=0;i<sizeof(datas)/sizeof(data);i++){
        fprintf(fptr,"[{%d;%20s;%20.2f}]",datas[i].accountno,datas[i].name,datas[i].accountvalue);
    }
    fclose(fptr);
    return i;
}
data *readall(char *file,int accountnum){
    data *result=(data*)calloc(accountnum,sizeof(data));
    int i=0;
    int tempno;
    char tempname[20];
    float tempvalue;
    FILE *fptr=fopen(file,"r");
    fseek(fptr,0,SEEK_SET);
    while(i<accountnum){
        fscanf(fptr,"[{%d;%s;%f}]\n",&tempno,tempname,&tempvalue);
        result[i].accountno=tempno;
        strcpy(result[i].name,tempname);
        result[i].accountvalue=tempvalue;
        printf("NO--{%d}\n",result[i].accountno);
        printf("VALUE--%f\n",result[i].accountvalue);
        fseek(fptr,61,SEEK_CUR);
        printf("[*]\n");
        i++;
    }
    printf("[%d] accounts initialized.\n",i);
    fclose(fptr);
    printf("--Reading ended.--\n");
    return result;
}
