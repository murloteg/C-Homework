#include <stdio.h>
#include <string.h>
#include <math.h>

int CountValue(char* input)
{
    int result = 0;
    int length = strlen(input);
    for (int i = 0; i < length; ++i)
    {
        result += (((int)input[i] - '0') * pow(10, i));
    }
    return result;
}

int main(void)
{
    printf("Введите размер массива: "); // массив содержит цифры десятичной записи числа.
    int n = 0;
    scanf("%d", &n);

    printf("Введите массив: "); // массив содержит цифры десятичной записи числа.
    char input[n];
    scanf("%s", input);

    int value = CountValue(input);
    printf("%d", value);

    return 0;
}
