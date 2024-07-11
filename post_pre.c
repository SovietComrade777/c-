#include<stdio.h>
int main(){
    int x;
    printf("Enter X");
    scanf("%d",&x);
    printf("Predecrimenting:\n");
    printf("x = %d\n",x);
    printf("x-- = %d\n",x--);
    printf("x=%d\n",x);
    x=25;
    printf("Postdecrimenting:\n");
    printf("x = %d\n",x);
    printf("--x = %d\n",--x);
    printf("x=%d\n",x);
}
