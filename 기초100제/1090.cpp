#include <stdio.h>
int main(){
    int a, r, n;
    scanf("%d %d %d", &a, &r, &n);
    long long int k = a;
    for(int i = 1; i < n; i++){
        k = k * r;
    }
    printf("%lld", k);
}

