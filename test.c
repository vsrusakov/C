#include <stdio.h>
#define ARRAY_SIZE( array ) sizeof( array ) / sizeof( array[0] )
/* Копирование ввода в вывод*/

int main()
{
    int c = 111;
    // while((c = getchar()) != EOF) {
    //     printf("%d\n", c);
    // }

    // c = getchar();
    // printf("%d", c);

    // if (1 != 1 && (c = getchar()) != EOF)
    // {
    //     printf("%c", c);
    // }
    // printf("%d", c);

    char str[3] = {'a', 'b', 'c'};
    // size_t len = sizeof( str ) / sizeof( str[0] );
    printf("%d", ARRAY_SIZE(str));
}