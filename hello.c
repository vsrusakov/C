#include <stdio.h>
// #include <Windows.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);

    printf("������, ���! �������-�� � ���\r������");
    printf("\r���");
    printf("\r���");
    return 0;
}