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

    printf("\nAnalyze rect: \n");
    long a = 0;
    long p = 0;
    analyze_rectangle(2, 2, &a, &p);
    printf("\nres: %ld, %ld \n", a, p );

    printf("\nCount steps: \n");
    int steps = count_steps(10);
    printf("Steps counted: %d", steps);

}