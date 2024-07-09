#include<stdio.h>
int main(){ 
    int org;
    printf("Input a positive number less than 500 ");
    scanf("%d",&org);

    int t,new=org,rev=0;
    while(new!=0){
        t=new%10;
        rev=rev+t;
        new=new/10;
    }
    printf("Sum of the digits of %d = %d",org,rev);
    return 0;
}
