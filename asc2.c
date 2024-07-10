#include<stdio.h>
int main(){
    char a;
    for(a='a';a<='z';){
        for(int j=1;j<=5;j++){
            printf("%d ",(int)a);
            a++;
        }
    printf("\n");
    }
    char s=' ';
    printf("%d ",(int)s);
    for(s='A';s<='Z';){
        for(int j=1;j<=5;j++){
            printf("%d ",(int)s);
            s++;
        }
        printf("\n");
    }
    return 0;
}
