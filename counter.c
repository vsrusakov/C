#include <stdio.h>

int main()
{
    for (int c = 0; c <= 500000; c = c + 1) {
        printf("\r%10d", c);
    }
}