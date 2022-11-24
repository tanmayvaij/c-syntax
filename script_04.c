// Constants

#include <stdio.h>

// Using #define preprocessor
#define A 10 // integer constant
#define B 'A' // character constant
#define C 5.6 // real constant

int main () {

    printf("%d \n", A);
    printf("%c \n", B);
    printf("%.2f \n", C);

    const int a = 4;
    const char b = 'b';
    const float c = 4.45;

    // Using const keyword
    printf("%d \n", a);
    printf("%c \n", b);
    printf("%.2f \n", c);

    return 0;

}
