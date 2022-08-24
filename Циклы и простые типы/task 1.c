#include <stdio.h>
#include <assert.h>

int SumDigit(int number)
{
    int summa = 0;
    while (number != 0)
    {
        summa += (number % 10);
        number /= 10;
    }

    return summa;
}

int main(void)
{
    int number = 0;
    assert(scanf("%d", &number) == 1);
    printf("%d", SumDigit(number));

    return 0;
}
