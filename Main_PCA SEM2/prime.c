#include <stdio.h>
int primecheck(int n){
    int flag;
    flag = 1;
    for(int i = 2; i<n;i++){
        if(n%i == 0){
            flag = 0;
            break;
        }
        if(n == 2){
            flag = 1;
            break;
        }
    }
    if(flag == 1) {
        printf("The number %d is prime",n);
    }
    else printf("The number %d is not prime",n);

}

int main(){
    primecheck(1);
}
