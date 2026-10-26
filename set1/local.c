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

    int n = 7;
    double res = divide_apples(n);
    printf("result of division: %f\n", res);

    printf("This is a local test");

}