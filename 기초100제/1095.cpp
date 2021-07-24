#include <stdio.h>
int main(){
    int n, k;
    scanf("%d", &n);
    int a[n] = {};
    for(int i = 0; i < n; i++){
        scanf("%d", &k);
        a[i] = k;
    }
    for(int i = 1; i < n; i++){
        if(a[i] > a[i-1]){
            a[i] = a[i-1];
        }
    }
    printf("%d", a[n-1]);
}
