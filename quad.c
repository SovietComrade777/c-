#include<stdio.h>
/**Write a C program to read the coordinates (x, y) (in the Cartesian system) and find the quadrant to which it belongs (Quadrant -I, Quadrant -II, Quadrant -III, Quadrant -IV).
Note: A Cartesian coordinate system is a coordinate system that specifies each point uniquely in a plane by a pair of numerical coordinates.
These are often numbered from 1st to 4th and denoted by Roman numerals: I (where the signs of the (x,y) coordinates are I(+,+), II (−,+), III (−,−), and IV (+,−).
Test Data :*/
int main(){
    int x,y;
    printf("Enter the x");
    scanf("%d",&x);
    printf("Enter the y");
    scanf("%d",&y);
    if(x>0&&y>0){
        printf("Quadrant-1(+,+)");
    }
    else if(x>0&&y<0){
        printf("Quadrant-4(+,-)");
    }
    else if(x<0&&y>0){
        printf("Quadrant-2(-,+)");
    }
    else if(x<0&&y<0){
        printf("Quadrant-3(-,-)");
    }
    else{
        printf("You're on origin");
    }
    return 0;
}
