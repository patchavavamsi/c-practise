
#include <stdio.h>

int main()
{
    int readings[8];
    int index = 0;
    int value, i;

    for(i = 0; i < 10; i++)
    {
        printf("Enter reading %d: ", i + 1);
        scanf("%d", &value);

        readings[index] = value;

        index++;

        if(index == 8)
        {
            index = 0;
        }
    }

    printf("\nLast 8 readings:\n");

    for(i = 0; i < 8; i++)
    {
        printf("%d ", readings[(index + i) % 8]);
    }

    return 0;
}
