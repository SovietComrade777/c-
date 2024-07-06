//8. Write a C program to convert specified days into years, weeks and days.
//Note: Ignore leap year
#include<stdio.h>
int main(){
    int days;
    scanf("%d",&days);
    int years=days/365;
    int dl=days-years*365;
    int weeks=dl/7;
    int dl2=dl-weeks*7;
    printf("No.of days:%d\n",days);
    printf("Years:%d\n",years);
    printf("weeks:%d\n",weeks);
    printf("Days:%d",dl2);
    return 0;
}
