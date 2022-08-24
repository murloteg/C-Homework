#include <stdio.h>
#include <assert.h>

int GetFactorial(int number)
{
    int result = 1;
    for (int i = 1; i <= number; ++i)
    {
        result *= i;
    }

    return result;
}

int main(void)
{
    int number = 0;
    assert(scanf("%d", &number) == 1);
    printf("%d", GetFactorial(number));

    return 0;
}
