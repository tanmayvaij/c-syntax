#include <stdio.h>

void greet() {
    printf("Hello Sir\n");
}

int sum(int n, int m) {
    return n+m;
}

void main () {

    greet();

    printf("%d\n", sum(4, 5));

    int j = sum(5, 1);

    printf("%d\n", j);

}
