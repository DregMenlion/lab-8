#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    int n;
    double sumSin = 0;
    double result = 0;

    setlocale(LC_ALL, "RUS");

    puts("ДОМАШНЕЕ ЗАДАНИЕ");
    puts("Вариант 15");

    printf("Введите n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sumSin = sumSin + sin(i);
        result = result + 1.0 / sumSin;
        printf("%.2f\n", sumSin);
    }

    printf("Результат = %.6f\n", result);

    return 0;
}