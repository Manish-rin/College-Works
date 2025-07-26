// #include <stdio.h>
// int main(){
//     //string length
//     char arr[] = "Manish";
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printf("The size of string is: %d",n-1);

// return 0;
// }

//alternate way

#include <stdio.h>
int main(){
    char arr[30] = "Monu";
    int i = 0;
    while(arr != '\0'){
        i++;
    }
}

