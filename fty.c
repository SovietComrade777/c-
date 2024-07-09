#include<stdio.h>
int main(){
    int A,B;
    printf("Input the first integer:");
    scanf("%d",&A);
    printf("Input the second integer:");
    scanf("%d",&B);
    for(A;A<B;A++){
        if(A%7==2 || A%7==3){
            printf("%d\n",A);
        }
    }
    return 0;
}
