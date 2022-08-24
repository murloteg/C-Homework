#include <stdio.h>
#include <assert.h>

int CalcFractionalPart(double number, int numberOfDigits)
{
    double fractionalPart = number - (int) number;
    for (int i = 0; i < numberOfDigits; ++i)
    {
        fractionalPart *= 10;
    }

    int integerPart = (int) fractionalPart;
    int result = 0;
    while (integerPart > 0)
    {
        result += (integerPart % 10);
        integerPart /= 10;
    }

    return result;
}

int main(void)
{
    double number;
    assert(scanf("%lf", &number) == 1);
    int numberOfDigits;
    assert(scanf("%d", &numberOfDigits) == 1);
    printf("%d", CalcFractionalPart(number, numberOfDigits));

    return 0;
}
