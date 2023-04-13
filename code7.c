#include <stdio.h>

void main () {

    int i = 0;
    while ( i < 5 ) {
        printf("%d\n", i);
        i++;
    }

    int m = 5;
    do {
        printf("%d\n", m);
        m--;
    }
    while (m > 0);

    for (int k = 0; k < 10; k++) {
        printf("%d\n", k);
    }

}
