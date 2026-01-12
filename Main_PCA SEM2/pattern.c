#include <stdio.h>
int main(){
    int row = 5;
    for(int i = 1; i <= row; i++){
        //handling space
        for(int j = 1; j <= row - i; j++ ){
            printf(" ");
        }
        //printing star now
        for(int k = 1; k <= i;k++){
            printf("* ");
        }
        printf("\n");

    }
return 0;
}
