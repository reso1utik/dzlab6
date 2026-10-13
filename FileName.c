#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    int number;

    setlocale(LC_ALL, "rus");
    printf("Введите четырехзначное число: ");
    scanf("%d", &number);

    int d1 = number / 1000;
    int d2 = (number / 100) % 10;
    int d3 = (number / 10) % 10;
    int d4 = number % 10;

    int is_palindrome = (d1 == d4) && (d2 == d3);

    printf("Число %d %sявляется перевертышем\n",
        number,
        is_palindrome ? "" : "НЕ ");

    return 0;
}

