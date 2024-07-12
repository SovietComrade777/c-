#include<stdio.h>
int main(){
    printf("x\tx+2\tx+4\tx+6\n");
    printf("------------------------------\n");
    for(int i =1;i<=13;i+=3){
        printf("%d\t%d\t%d\t%d\n",i,i+2,i+4,i+6);
    }
    return 0;
}
