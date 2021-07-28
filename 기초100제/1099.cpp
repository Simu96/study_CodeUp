#include <stdio.h>
int main(){
    int a[10][10] = {};
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    int x = 1;
    int y = 1;
    
   while(1){ 
        if(a[x][y] == 2){
            a[x][y] = 9;
            break;
        }else if(a[x][y+1] == 0 || a[x][y+1] == 2){
            a[x][y] = 9;
            y++;
        }else if(a[x+1][y] == 0 || a[x+1][y] == 2){
            a[x][y] = 9;
            x++;
        }else if(a[x][y+1] == 1 && a[x+1][y] == 1){
            a[x][y] = 9;
            break;
        }
    }
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
