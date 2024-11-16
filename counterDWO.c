#include <stdio.h>

int main() {
    /* подсчет цифр, пробелов* и прочего */

    int c, i = 0, nWhite = 0, nOthers = 0;
    int nDigits[10];
    for (i = 0; i < 10; ++i) {
        nDigits[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        if ('0' <= c && c <= '9') {
            ++nDigits[c - '0'];
        } else if (c == ' ' || c == '\n' || c == '\t') {
            ++nWhite;
        } else {
            ++nOthers;
        }
    }

    for (i = 0; i < 10; ++i) {
        printf("%d ", nDigits[i]);
    }
    printf("\n%d, %d", nWhite, nOthers);
    return 0;
}