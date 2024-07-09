#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Input the number of lines:");
    scanf("%d",&a);
    for(int i =1;i<=a;i++){
        for(int j=1;j<=3;j++){
            int var =pow(i,j);
            printf("%d ",var);
        }
        printf("\n");
    }
    return 0;
}
