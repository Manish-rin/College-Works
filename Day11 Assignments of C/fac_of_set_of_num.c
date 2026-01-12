//write a program in c to compute factorial of a set of numbers
#include <stdio.h>
int fac(int *n){
    if(*n < 2){
        return 1;
    }

    else{
        int temp = (*n-1);
        return *n * fac(&temp);
    }
}

int main(){
    int x;
    int set[] = {3,5,4,2};
    int n = sizeof(set) / sizeof(set[0]);
    int *ptr = set;
    printf("The factorials are: ");
    for(int i =0; i<n; i++){
        x = fac(ptr);
        printf("%d ",x);
        ptr++;
    }
    return 0;
}
