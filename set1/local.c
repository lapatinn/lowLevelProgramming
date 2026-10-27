#include <stdio.h>
#include "tasks.h"

void local_tests(void) {
    // You can use this file for testing functions locally
    int x = -3;
    if (is_odd(x)) {
        printf("%d is odd\n", x);
    } else {
        printf("%d is even\n", x);
    }

    printf("Analyze rect");
    long a = 0;
    long p = 0;
    analyze_rectangle(2, 2, &a, &p);
    printf("res: %ld, %ld", a, p );
}