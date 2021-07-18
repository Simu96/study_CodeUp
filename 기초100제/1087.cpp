#include <stdio.h>
int main(){
    long long int n;
    long long int sum = 0;
    scanf("%d", &n);
    for(int i = 1; ;i++){
        sum = sum + i;
        if(sum >= n){
            printf("%lld", sum);
            break;
        }
    }
}
