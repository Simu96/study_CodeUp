#include <stdio.h>
int main(){
    long long int h, b, c, s;
    double byte;
    scanf("%d %d %d %d", &h, &b, &c, &s);
    byte = h * b * c * s;
    printf("%.1f MB", byte/8388608);
}
