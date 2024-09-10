#include <stdio.h>

/*
Таблица перевода температур по Фаренгейту
и Цельсию для fahr = 0, 20, ... , 300
*/

int main()
{
    int fahr, cels;
    // int lower, upper, step;

    int lower = 0, upper = 300, step = 20;

    fahr = lower;
    while (fahr <= upper) {
        cels = 5 * (fahr - 32) / 9;
        // cels = (5 / 9) * (fahr - 32);
        // printf("%d\t%d\n", fahr, cels);
        printf("%3d %6d\n", fahr, cels);
        fahr = fahr + step;
    }
}