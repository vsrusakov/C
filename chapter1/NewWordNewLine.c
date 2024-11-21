#include <stdio.h>

int main()
{
    int c, ns = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (ns == 0) {
                ++ns;
                putchar('\n');
            }
        } else {
            ns = 0;
            putchar(c);
        }
    }
}