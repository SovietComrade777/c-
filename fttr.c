#include<stdio.h>
int main(){
    int r,c;
    printf("Input number of lines:");
    scanf("%d",&r);
    printf("Number of characters in a line:");
    scanf("%d",&c);
    int k=1;
    for(int i=1;i<=r;i++){
        for(int j =1;j<=c;j++){
            printf("%d ",k);
            k+=1;
        }
        printf("\n");
    }
    return 0;
}
