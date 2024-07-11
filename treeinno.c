#include<stdio.h>
int main(){
    int w;
    printf("Input a number(less than 7 digits)");
    scanf("%d",&w);
    int count=0,temp;
    while(w!=0){
        temp=w%10;
        if(temp==3){
            count+=1;
        }
        w/=10;
    }
    printf("The number of threes in the said number is %d",count);
    return 0;
}
