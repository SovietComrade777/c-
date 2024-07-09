#include <stdio.h>
int main(){
    int arr[6];
    for(int i =0;i<6;i++){
        printf("<%d>",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<3;i++){
        int temp=arr[i];
        arr[i]=arr[5-i];
        arr[5-i]=temp;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("array_n[%d] = %d\n",i,arr[i]);
    }
    
    return 0;
}
