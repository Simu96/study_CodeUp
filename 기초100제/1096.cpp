#include <stdio.h>
int main(){
    int n, x, y;
    int s[19][19] = {};
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        s[x-1][y-1] = 1;
    }
    for(int i = 0; i < 19; i++){
        for(int j = 0; j < 19; j++){
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }
}
