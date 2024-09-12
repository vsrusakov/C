#include <stdio.h>
/* Копирование ввода в вывод*/

int main()
{
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}