#include <stdio.h>
#include <math.h>

double func(int x)
{
    double result = 0;
    for (int i = 1; i <= x; ++i)
    {
        result += (1/(pow(i, 2)));
    }
    return result;
}


int main()
{
    int n = 0;
    printf("Введите целое число n: ");
    scanf("%d", &n);
    double result = 0;
    result = func(n);
    printf("Полученное значение = %f", result);
    return 0;
}