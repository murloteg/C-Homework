#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int* CreateArray(int number)
{
    int* array = (int*) malloc(sizeof(int) * number);
    assert(array);

    for (int i = 0; i < number; ++i)
    {
        assert(scanf("%d", &array[i]) == 1);
    }

    return array;
}

void Swap(int* first, int* second)
{
    int temporaryValue = *first;
    *first = *second;
    *second = temporaryValue;
}

void FlipArray(int* array, int number)
{
    for (int i = 0; i < (number / 2); ++i)
    {
        Swap(&array[i], &array[number - i - 1]);
    }
}

void PrintArray(const int* array, int number)
{
    for (int i = 0; i < number; ++i)
    {
        printf("%d ", array[i]);
    }
}

void CleanUp(int* array)
{
    free(array);
}

int main(void)
{
    int number;
    assert(scanf("%d", &number) == 1);
    int* array = CreateArray(number);
    FlipArray(array, number);
    PrintArray(array, number);
    CleanUp(array);

    return 0;
}
