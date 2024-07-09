#include<stdio.h>
int main(){ 
    int org;
    printf("Input a number ");
    scanf("%d",&org);
    printf("The original number = %d \n",org);

    int t,rev=0;
    while(org!=0){
        t=org%10;
        rev=10*rev+t;
        org=org/10;
    }
    printf("The reverse of the said number = %d",rev);
    return 0;
}
