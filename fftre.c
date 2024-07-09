#include<stdio.h>
int main(){
    int p,t;float r;
    printf("Principal:");
    scanf("%d",&p);
    printf("Rate :");
    scanf("%f",&r);
    printf("Time(in years):");
    scanf("%d",&t);
    float si=(p*r*t)/100;
    printf("Simple Intrest %f",si);
}
