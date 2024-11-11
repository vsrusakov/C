#include <stdio.h>
/* Копирование ввода в вывод*/

int main()
{
    int c;
    while((c = getchar()) != EOF) {
        printf("%d\n", c);
    }
    // c = getchar();
    // printf("%d", c);
}