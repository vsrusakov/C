#include <stdio.h>
/* Копирование ввода в вывод с заменой 
   нескольких пробелов на один */

int main()
{
    int c, nws = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (nws == 0) {
                putchar(c);
                ++nws;
            }
        } else {
            nws = 0;
            putchar(c);
        }
    }
}