#include <stdio.h>

/* замена tab при вводе заданным количеством пробелов */

int TAB_SIZE = 3;
int mod(int x, int y);

int main()
{
    // int n;
    // printf("input the tab size (positive), press enter: ");
    // n = getchar();
    // printf("%c\n", n);

    int c, k, i = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            i = 0;
            putchar(c);
        }
        else if (c == '\t')
        {
            for (k = 0; k < TAB_SIZE - mod(i, TAB_SIZE); ++k)
                putchar(' ');
            i += k;
        }
        else
        {
            ++i;
            putchar(c);
        }
    }
    return 0;
}

/* x modulo y */
int mod(int x, int y)
{
    return x - (x / y) * y;
}