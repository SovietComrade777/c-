//Write a C program to calculate the distance between two points.
#include<stdio.h>
#include<math.h>
int main(){
    int x1,x2,y1,y2;
    float d;
    printf("Input x1:");
    scanf("%d",&x1);
    printf("Input y1:");
    scanf("%d",&y1);
    printf("Input x2:");
    scanf("%d",&x2);
    printf("Input y2:");
    scanf("%d",&y2);
    d=sqrtf((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("Distance between the said points:%.4f",d);
    return 0;
}
