#include <stdio.h>
int main(){
    char c;
    scanf("%c", &c);
    for(char i = 'a'; i <= c; i++){
        printf("%c ", i);
    }
}
