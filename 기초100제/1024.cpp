#include <stdio.h>
int main(){
    char c[21];
    scanf("%s", c);
    for(int i = 0; c[i]!='\0'; i++){
        printf("'%c'", c[i]);
        printf("\n");
    }
}
