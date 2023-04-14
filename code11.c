#include <stdio.h>

void printArray( int* arr, int n ) {

    for ( int i = 0; i < n; i++ ) {
        printf("%d\n", *(arr+i));
    }

}

void main () {

    int arr [4] = {11, 12, 13, 14};

    int n = sizeof(arr) / sizeof(int);

    printArray(arr, n);

}
