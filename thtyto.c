#include<stdio.h>
int main(){
    int s;
    printf("Input an integer:");
    scanf("%d",&s);
    for(int i=0;i<=100;i++){
        if(i%s==3){
            printf("%d\n",i);
        }
    }
    return 0;
}
