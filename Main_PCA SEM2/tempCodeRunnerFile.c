#include <stdio.h>
int primecheck(int n){
    int flag = 0;
    for(int i = 2; i<=n;i++){
        if(n%i != 0 || n == 2){
            flag = 1;