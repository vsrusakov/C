#include <stdio.h>
// #include <Windows.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);

    printf("Привет, мир! Наконец-то я тут\rотмена");
    printf("\rраз");
    printf("\rдва");
    return 0;
}