#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

short* InputArray(int number)
{
    short* arrayWithDigits = (short*) malloc(sizeof(short) * number);
    assert(arrayWithDigits);

    for (int i = 0; i < number; ++i)
    {
        assert(scanf("%hd", &arrayWithDigits[i]) == 1);
    }

    return arrayWithDigits;
}

int GetNumber(const short* arrayWithDigits, int number)
{
    int result = 0;
    for (int i = 0; i < number; ++i)
    {
        result *= 10;
        result += (int) arrayWithDigits[i];
    }

    return result;
}

void CleanUp(short* arrayWithDigits)
{
    free(arrayWithDigits);
}

int main(void)
{
    int number;
    assert(scanf("%d", &number) == 1);
    short* arrayWithDigits = InputArray(number);
    printf("%d\n", GetNumber(arrayWithDigits, number));
    CleanUp(arrayWithDigits);

    return 0;
}
