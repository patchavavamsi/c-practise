
#include <stdio.h>

int main()
{
    char str[100];
    int start = 0, end = 0;
    char temp;

    printf("Enter a string: ");
    scanf("%99s", str);

    while (str[end] != '\0')
    {
        end++;
    }

    end--;

    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
