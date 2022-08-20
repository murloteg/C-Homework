#include <stdio.h>

int GetLengthOfInput(int input)
{
    int length = 0;
    while (input > 0)
    {
        input /= 10;
        length += 1;
    }
    return length;
}

char* WriteToArray(char* array, int input, int length)
{
    for (int i = 0; i < length; ++i)
    {
        array[i] = (char)(input % 10) + '0';
        input /= 10;
    }
    return array;
}

int main(void)
{
    printf("Введите число: ");
    int input;
    scanf("%d", &input);

    int length = GetLengthOfInput(input);
    char array[length];
    WriteToArray(array, input, length);
    printf("%s", array);

    return 0;
}
