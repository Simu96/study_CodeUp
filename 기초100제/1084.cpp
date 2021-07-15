#include <stdio.h>
int main(){
    int r, g, b;
    int n = 0;
    scanf("%d %d %d", &r, &g, &b);
    for(int i = 0; i < r; i++){
        for(int j = 0; j < g; j++){
            for(int u = 0; u < b; u++){
            printf("%d %d %d\n", i, j, u);
            n++;
            }
        }
    }
    printf("%d", n);
}
