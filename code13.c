#include <stdio.h>

struct Student {
    char* name;
    long long int PRN;
};

typedef struct Complex {
    int real;
    int imag;
} Complex;

void main () {

    struct Student s1;

    s1.name = "Tanmay";
    s1.PRN = 20210801105;

    printf("Student name:- %s\n", s1.name);
    printf("Student PRN:- %lld\n", s1.PRN);

    Complex c1;

    c1.real = 3;
    c1.imag  =4;

    printf("%d + (%d)i", c1.real, c1.imag);

}
