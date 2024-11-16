#include <stdio.h>

int power(int x, int n) {
    int i, p = 1;

    for (i = 1; i <= n; ++i) {
        p = p * x;
    }
    return p;
}

int main() {
    for (int i = 0; i <= 10; ++i) {
        printf("i=%d, \t2**%d=%d, \t-3**%d=%d\n", i, i, power(2, i), i, power(-3, i));
    }
    return 0;
}