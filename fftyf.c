#include<stdio.h>
int main(){
    int x,y;
    printf("x:");
    scanf("%d",&x);
    printf("y:");
    scanf("%d",&y);
    printf("x and y:%d and %d \n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("x and y:%d and %d",x,y);
    return 0;
}
