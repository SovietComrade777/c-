#include<stdio.h>
int main(){
    int a;
    printf("Enter the side of square:\n");
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            printf("# ");
        }
        printf("\n");
    }
    return 0;
}
