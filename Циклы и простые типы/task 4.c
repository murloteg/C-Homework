#include <stdio.h>
#include <math.h>

int GetFractionalPart(float x, int y)
{
    int tmp = (int)x;
    float help_var = x - (float)tmp;
    help_var = help_var * pow(10, y);
    int result = (int)help_var;
    return result;
}

int sum_digit(int x)
{
    int summa = 0;
    while (x > 0)
    {
        summa += (x % 10);
        x = x / 10;
    }
    return summa;
}

int main()
{
    int n = 0;
    float input;
    printf("Введите ваше число, затем n: ");
    scanf("%f %d", &input, &n);
    if (input < 0)
    {
        input *= (-1);
    }

    int result = GetFractionalPart(input, n);
    int summa = sum_digit(result);
    printf("Сумма первых n цифр вашего числа = %d", summa);

    return 0;
}