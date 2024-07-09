#include <stdio.h>
int main(){
    int ij;
    printf("Input an integer:");
    scanf("%d",&ij);
    printf("All the divisors of 45 are:\n");
    for(int i=1;i<=ij;i++){
        if(ij%i==0){
            printf("%d\n",i);
        }
    }
    return 0;
}
