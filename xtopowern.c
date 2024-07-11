#include<stdio.h>
#include<math.h>
int main(){
    int x,n=0;
    printf("input the values of x and n: ");
    scanf("%d",&x);
    scanf("%d",&n);
    printf("X = %d;,n=%d;\nx to power n=%f",x,n,pow(x,n));
    return 0;
}
