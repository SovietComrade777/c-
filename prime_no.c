#include<stdio.h>
int main(){
    printf("The prime numbers betwwen 1 to 199 are:\n");
    int count=0,ctr=1;
    for (int i = 1; i < 200; i++)
    {
        for(int j =1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(ctr<=20){
            if(count==2){
                printf("%d ",i);
                ctr++;
            }
        }
        else{
            printf("\n");
            ctr=1;
        }
        
        
        count=0;
    }
    
    return 0;
}
