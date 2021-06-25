#include <stdio.h>
int main(){
    int n;
    int sum = 0;
    scanf("%d", &n);
    for(int i = 1; ;i++){
        sum = sum + i;
        if(sum >= n){
            printf("%d", i);
            break;
        }
    }
}
