#include <stdio.h>

void main() {

    for ( int i = 0; i < 10; i++ ) {

        if ( i == 2 ) {
            continue;
        }

        if ( i == 6 ) {
            break;
        }

        printf("%d\n", i);

    }

}
