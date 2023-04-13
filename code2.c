#include <stdio.h>

void main () {

    int a = 4;
    float b = 5.5;
    char c = 'A';

    const int A = 5;
    const float B = 7.6;
    const char C = 'T';

    printf("Integer is %d\n", a);
    printf("Float is %f\n", b);
    printf("Char is %c\n", c);

    printf("constant integer is %d\n", A);
    printf("constant float is %f\n", B);
    printf("constant char is %c\n", C);

    printf("%d %d", 5, 6);

}
