#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        printf("<%d>:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<5;i++){
        if(arr[i]<5){
            printf("A[%d] = %d\n",i,arr[i]);
        }
    
    }
    return 0;
}
