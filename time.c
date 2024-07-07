//Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
#include<stdio.h>
int main(){
    int seconds;
    int a;
    printf("Input Seconds");
    scanf("%d",&seconds);
    a=seconds/3600;
    printf("H:M:S-%d",a);
    seconds=seconds-(a*3600);
    a=seconds/60;
    printf(":%d",a);
    seconds=seconds-(a*60);
    printf(":%d",seconds);
    return 0;
}
