#include <stdio.h>

int factorial(int x)
{
    int result = 1;
    for (int i = 1; i <= x; ++i)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int result = 1;
    int input = 0;
    printf("Введите целое число: ");
    scanf("%d", &input);
    result = factorial(input);
    printf("Факториал вашего числа = %d", result);
    return 0;
}