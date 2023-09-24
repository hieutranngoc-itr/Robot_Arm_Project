#include "stdio.h"

int main(void){
    int *ptr;
    int arr[5] = {};
    for (int j = 0; j < 5; j++){
        arr[j] = j;
    }
    int a = 2;
    ptr = &arr[1];
    printf("ptr address: %d\n", ptr);
    printf("ptr value: %d\n", *ptr);
    int i = 0;
    /*
    for(i = 0; i < 5; i++){
        printf("i = %d\n", &i);
    }
    */
    return 0;
}