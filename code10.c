#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main () {

    int a = 2, b = 4;

    printf("Before swapping:- ( %d, %d )  \n", a, b );

    swap(&a, &b);

    printf("After swapping:- ( %d, %d )  \n", a, b );

}
