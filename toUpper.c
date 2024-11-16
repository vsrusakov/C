#include <stdio.h>

char toUpper(char c) {
    if ('a' <= c && c <= 'z') {
        return 'A' + c - 'a';
    }
    return c;
}

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        // if ('a' <= c <= 'z') {
        //     putchar('A' + c - 'a');
        // } else {
        //     putchar(c);
        // }

        // printf("%c", toUpper(c));
        putchar(toUpper(c));
    }
    return 0;
}