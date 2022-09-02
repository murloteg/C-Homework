#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int* InputArray(int number)
{
    int* array = (int*) malloc(sizeof(int) * number);
    assert(array);

    for (int i = 0; i < number; ++i)
    {
        assert(scanf("%d", &array[i]) == 1);
    }

    return array;
}

int SumArray(const int* array, int number)
{
    int result = 0;
    for (int i = 0; i < number; ++i)
    {
        result += array[i];
    }

    return result;
}

void CleanUp(int* array)
{
    free(array);
}

int main(void)
{
    int number;
    assert(scanf("%d", &number) == 1);
    int* array = InputArray(number);
    printf("%d\n", SumArray(array, number));
    CleanUp(array);

    return 0;
}
