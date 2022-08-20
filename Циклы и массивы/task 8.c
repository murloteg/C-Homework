#include <stdio.h>

char* FlipArray(char* input, int length)
{
        for (int i = 0; i < ((length + 1) / 2); ++i)
        {
            char tempVariable = input[i];
            input[i] = input[length - i - 1];
            input[length - i - 1] = tempVariable;
        }

    return input;
}

int main(void)
{
    printf("Введите размер массива: ");
    int n;
    scanf("%d", &n);

    printf("Введите массив: ");
    char input[n];
    scanf("%s", input);

    FlipArray(input, n);
    printf("%s", input);
    return 0;
}
