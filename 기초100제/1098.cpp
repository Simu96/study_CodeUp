#include <stdio.h>
int main(){
    int h, w;
    scanf("%d %d", &h, &w);
    int a[h][w] = {};;
    int n;
    int l, d, x, y;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d %d %d", &l, &d, &x, &y);
        if(d == 1){
            for(int j = 0; j < l; j++){
                a[x-1+j][y-1] = 1;    
            }
        }else{
            for(int j = 0; j < l; j++){
                a[x-1][y-1+j] = 1;
            }
        }
    }
    
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
