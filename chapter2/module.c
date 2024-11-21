#include <stdio.h>
#include <limits.h>

int main()
{
    char a = 0, a_min, a_max;
    short b = 0, b_min, b_max;
    int c = 0, c_min, c_max;
    long d = 0, d_min, d_max;

    for (;;)
    {
        a++;
        b++;
        c++;
        d++;

        if (a < 0) {
            a_min = a;
            a_max = --a;
        }

        if (b < 0) {
            b_min = b;
            b_max = --b;
        }

        if (c < 0) {
            c_min = c;
            c_max = --c;
        }

        if (d < 0) {
            d_min = d;
            d_max = --d;
            break;
        }
    }

    printf("a_min=%d, a_max=%d\nb_min=%d, b_max=%d\nc_min=%d, c_max=%d\nd_min=%d, d_max=%d",
        a_min, a_max, 
        b_min, b_max, 
        c_min, c_max,
        d_min, d_max
    );
}