#include <stdio.h>
int main(){
    char c;
    while(1){
        scanf("%c ", &c);
        if(c == 'q'){
            printf("%c\n", c);
            break;
        }else{
            printf("%c\n", c);
        }
    }
}
