#include <stdio.h>
#define MAXLEN 1000
#define ARRAY_SIZE( array ) sizeof( array ) / sizeof( array[0] )

/* TODO: исправить ARRAY_SIZE */

int getline(char line[], int maxline);
void reverse(char string[]);

int main()
{
    int len;
    char line[MAXLEN];

    while ((len = getline(line, MAXLEN)) > 0)
    {
        reverse(line);
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

void reverse(char str[])
{
    int c, i, arrlen = ARRAY_SIZE(str);
    for (i = 0; i < arrlen/2; ++i) {
        c = str[i];
        str[i] = str[arrlen - i - 1];
        str[arrlen - i - 1] = c;
    }
}