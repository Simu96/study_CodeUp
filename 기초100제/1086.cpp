#include <stdio.h>
int main(){
    int w, h, b;
    double sum = 0;
    scanf("%d %d %d", &w, &h, &b);
    sum = w * h * b;
    printf("%.2f MB", sum/8/1024/1024);
}
