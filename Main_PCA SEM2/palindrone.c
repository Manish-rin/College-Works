#include<stdio.h>
int main(){
    char str[] = "madam";
    //Reversing string
    int n = sizeof(str)/sizeof(str[0]); //7
    char rev[n];
    int j =0;
    for(int i = n-1; i>=0;i-- ){
        rev[j] = str[i];
        j++;
    }

    //printing reverse string
    for(int i = 0; i<n; i++){
        printf("%c",rev[i]);
    }

}
