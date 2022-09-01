#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

void GetAbsoluteValue(int* number)
{
    if (*number < 0)
    {
        (*number) *= (-1);
    }
}

int GetLengthOfNumber(int number)
{
    if (number == 0)
    {
        return 1;
    }

    int length = 0;
    while (number > 0)
    {
        number /= 10;
        ++length;
    }

    return length;
}

int* CreateArrayFromNumber(int number, int lengthOfNumber)
{
    int* arrayWithDigits = (int*) malloc(sizeof(int) * lengthOfNumber);
    assert(arrayWithDigits);

    int counter = 0;
    for (int i = 0; i < lengthOfNumber; ++i)
    {
        arrayWithDigits[i] = (number / (int) pow(10, lengthOfNumber - counter - 1)) % 10;
        ++counter;
    }

    return arrayWithDigits;
}

void PrintArray(const int* arrayWithDigits, int lengthOfNumber)
{
    for (int i = 0; i < lengthOfNumber; ++i)
    {
        printf("%d", arrayWithDigits[i]);
    }
}

void CleanUp(int* arrayWithDigits)
{
    free(arrayWithDigits);
}

int main(void)
{
    int number;
    assert(scanf("%d", &number) == 1);
    GetAbsoluteValue(&number);
    int lengthOfNumber = GetLengthOfNumber(number);
    int* arrayWithDigits = CreateArrayFromNumber(number, lengthOfNumber);
    PrintArray(arrayWithDigits, lengthOfNumber);
    CleanUp(arrayWithDigits);

    return 0;
}
