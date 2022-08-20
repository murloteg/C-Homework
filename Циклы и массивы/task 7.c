#include <stdio.h>

int SumArray(int* input, int length)
{
    int result = 0;
    for (int i = 0; i < length; ++i)
    {
        result += input[i];
    }
    return result;
}

int main(void)
{
    printf("Введите размер массива: ");
    int length;
    scanf("%d", &length);

    printf("Введите массив: ");
    int input[length];
    for (int i = 0; i < length; ++i)
    {
        scanf("%d", &input[i]);
    }

    int summa = SumArray(input, length);
    printf("%d", summa);

    return 0;
}
