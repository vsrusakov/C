#include <stdio.h>

#define IN 1 // внутри слова
#define OUT 0 // вне слова

int main()
{
    int c, nl, nw, ns, state;

    nl = 0, nw = 0, ns = 0;
    state = OUT;
    
    while ((c = getchar()) != EOF) {
        ++ns;
        if (c == '\n') {
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("lines = %d; words = %d; symbols = %d.", nl, nw, ns);
}