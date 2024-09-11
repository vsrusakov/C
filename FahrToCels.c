#include <stdio.h>

/*
Таблица перевода температур по Фаренгейту
и Цельсию для fahr = 0, 20, ... , 300; версия с float
*/

int main()
{
    float fahr, cels;
    // int lower, upper, step;

    int lower = 0, upper = 300, step = 20;

    fahr = lower;
    printf("Fahr    Cels\n");
    while (fahr <= upper) {
        cels = (5.0 / 9.0) * (fahr - 32.0);
        // cels = (5 / 9) * (fahr - 32);
        // printf("%d\t%d\n", fahr, cels);
        printf("%4.0f %7.2f\n", fahr, cels);
        fahr = fahr + step;
    }
}