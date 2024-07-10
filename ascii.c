#include<stdio.h>
#include<math.h>
int main()
{
    for (int i=65;i<119;i++){
        char a= (char)i;
        printf("[%d-%c] ",i,a);
    }
    return 0;
}
