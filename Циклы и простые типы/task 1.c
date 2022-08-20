#include <stdio.h>

int sum_digit(int x)
{
    int summa = 0;
    while (x != 0)
    {
        summa = summa + (x % 10);
        x = x / 10;
    }
    return summa;
}

int main()
{
    int summa;
    int input = 0;
    printf("Введите целое число: ");
    scanf("%d", &input);
    summa = sum_digit(input);
    printf("Сумма цифр вашего числа = %d", summa);
    return 0;
}

