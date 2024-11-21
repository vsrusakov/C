#include <stdio.h>
#define YES 1
#define NO 0
#define UNDEFINED -1

/* 
    0...9 -> 48...59
    A...Z -> 65...90
    a...z -> 97...122
    - -> 45
*/

int main() {
    int c, 
        ns = 0, 
        nl = 0, 
        nw = 0, 
        inWord = NO,
        isValidWord = UNDEFINED;

    while ((c = getchar()) != EOF) {
        ++ns;
        if (c == '\n') {
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t') {

            if (inWord == YES && isValidWord == YES) {
                ++nw;
            }
            inWord = NO;
            isValidWord = UNDEFINED;

        } else if (inWord == NO) {

            inWord = YES;
            if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z')) {
                isValidWord = YES;
            } else {
                isValidWord = NO;
            }
        
        } else if (isValidWord == YES) {

            if (
                (c != '-') && 
                ('0' > c || c > '9') && 
                ('A' > c || c > 'Z') && 
                ('a' > c || c > 'z')
                ) {
                isValidWord = NO;
            };

        }
    }

    if (inWord == YES && isValidWord == YES) {
        ++nw;
        ++nl;
    }

    printf("lines = %d; words = %d; symbols = %d.", nl, nw, ns);
    return 0;
}