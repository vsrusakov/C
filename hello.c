#include <stdio.h>
// #include <Windows.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);

    printf("hello");
    printf("\b");
    printf("!\n");
    printf("hello");
    printf("\r");
    printf("%%");
    return 0;
}