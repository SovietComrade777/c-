#include<stdio.h>
int main(){
    int ctr=1;
    for(int i=1;i<=256;i++){
        if(ctr<=16){
            printf(" <%d:%c> ",i,(char)i);
            ctr++;
        }
        else{
            printf("\n");
            ctr=1;
        }
    }
    
}
