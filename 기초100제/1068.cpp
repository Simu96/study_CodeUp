#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(100 >= a && a >= 90){
        printf("A");
    }else if(90 > a && a>= 70){
        printf("B");
    }else if(70 > a && a>= 40){
        printf("C");
    }else{
        printf("D");
    }
}
