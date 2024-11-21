#include <stdio.h>
#define MAXLEN 1000
#define MINLEN 0

int getline(char line[], int maxline);

int main()
{
    int len;
    char line[MAXLEN];

    while ((len = getline(line, MAXLEN)) > 0)
    {
        if (len >= MINLEN)
            printf("len=%d\t%s", len, line);
    }
    return 0;
}

int getline(char s[], int lim)
{
    int c, i, wstart = -1;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        if (c == ' ' || c == '\t') {
            if (wstart == -1)
                wstart = i;
        } else {
            wstart = -1;
        }
        s[i] = c;
    }

    if (wstart != -1) {
        if (c == EOF) {
            s[wstart] = '\0';
        } else {
            s[wstart] = '\n';
            s[++wstart] = '\0';
        }
        return wstart;
    }
    
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}