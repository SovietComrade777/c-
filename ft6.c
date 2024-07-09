#include<stdio.h>
int main(){
    float kaju=0.0;
    float k=1;
    for(int i=1;i<5;i++){
        kaju+=(2*i-1)/(k);
        k=k*2;
    }
    printf("%.2f",kaju);
    return 0;
}
