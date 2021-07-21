#include <stdio.h>
int main(){
    int a, m, d, n;
    scanf("%d %d %d %d", &a, &m, &d, &n);
    long long int k = a;
    for(int i = 1; i < n; i++){
        k = k * m +  d;
    }
    printf("%lld", k);
}
