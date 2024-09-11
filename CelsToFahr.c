#include <stdio.h>

int main()
{
    float fahr, cels;
    int lower = -30, upper = 50, step = 10;

    cels = lower;

    printf("Cels    Fahr\n");
    while (cels <= upper) {
        fahr = (9.0 / 5.0) * cels + 32.0;
        printf("%4.0f %7.2f\n", cels, fahr);
        cels = cels + step;
    }
}