#include <stdio.h>
#include <assert.h>
#include <math.h>

double CalcPi(int number)
{
    double result = 0;
    for (int i = 1; i <= number; ++i)
    {
        result += (1.0 / (i * i));
    }

    return pow(result * 6, 0.5);
}

int main(void)
{
    int number;
    assert(scanf("%d", &number) == 1);
    printf("%f", CalcPi(number));

    return 0;
}
