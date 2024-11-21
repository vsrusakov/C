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
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}