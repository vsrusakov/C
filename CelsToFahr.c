#include <stdio.h>
#define LOWER -30
#define UPPER 50 
#define STEP 10

int main()
{
    int cels;

    printf("Cels    Fahr\n");
    for (cels = UPPER; cels >= LOWER; cels = cels - STEP) {
        printf("%4d %7.2f\n", cels, (9.0 / 5.0) * cels + 32.0);
    }
}