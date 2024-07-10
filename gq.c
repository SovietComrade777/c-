#include<stdio.h>
#include<math.h>
int main()
{
    for(int i=0;i<11;i++){
        double q,rq;
        q=pow(2,i);
        rq=pow(2,-i);
        printf("%d %f %f \n",i,q,rq);
    }
    return 0;
}
