#include <stdio.h>
int main(){
    int arr[7];
    printf("Input the 5 numbers in the array\n");
    for(int i=0;i<7;i++){
        scanf("%d",&arr[i]);
    }
    printf("array values are");
    for(int i=0;i<7;i++){
        if(arr[i]<=0){
            arr[i]=100;
        }
        printf("n[%d] = %d\n",i,arr[i]);

    }
    
}
