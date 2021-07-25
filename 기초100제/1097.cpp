#include <stdio.h>
int main(){
    int n, x, y;
    int s[19][19] = {};
    for(int i = 0; i < 19; i++){
        for(int j = 0; j < 19; j++){
            scanf("%d", &s[i][j]);
        }
    }
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        for(int j = 0; j < 19; j++){
            if(s[j][y-1] == 1){
                s[j][y-1] = 0;
            }else{
                s[j][y-1] = 1;
            }
            if(s[x-1][j] == 1){
                s[x-1][j] = 0;
            }else{
                s[x-1][j] = 1;
            }
        }
    }
    
    for(int i = 0; i < 19; i++){
        for(int j = 0; j < 19; j++){
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }
}

