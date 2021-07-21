#include <stdio.h>
int main(){
    int n, k;
    int a[23] = {};
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &k);
        a[k-1] += 1;
    }
    for(int i = 0; i < 23; i++){
        printf("%d ", a[i]);
    }
}
