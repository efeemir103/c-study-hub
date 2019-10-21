#include <stdio.h>
#include <string.h>
long double silindir(long double x, long double y);
long double dikprizma(long double x, long double y, long double z);
long double a,b,c,r,h,u;
void main(){
    int input;
    printf("1)Silindir 2)Dikdörtgen Prizma birini seçiniz.\n");
    scanf("%d",&input);
    printf("Sapma miktarı giriniz.\n");
    scanf("%Lf",&u);
    if (input==1){
        printf("Çap giriniz.\n");
        scanf("%Lf",&r);
        printf("Yükseklik giriniz.\n");
        scanf("%Lf",&h);
        printf("Hacim = %Lf +/- %Lf \n",silindir(r,h),silindir(r,h)*(u/r+u/r+u/h));
    }
    else if (input==2){
        printf("Ayrıt 1 i giriniz.\n");
        scanf("%Lf",&a);
        printf("Ayrıt 2 i giriniz.\n");
        scanf("%Lf",&b);
        printf("Ayrıt 3 i giriniz.\n");
        scanf("%Lf",&c);
        printf("Hacim = %Lf +/- %Lf \n",dikprizma(a,b,c),dikprizma(a,b,c)*(u/a+u/b+u/c));
    }
    else{
        printf("Bu bir seçenek değil.\n");
    }
}
long double silindir(long double x, long double y){
    return x*x*h/4;
}
long double dikprizma(long double x, long double y, long double z){
    return x*y*z;
}