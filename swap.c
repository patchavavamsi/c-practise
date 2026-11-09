
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nBefore swapping:");
    printf("\nnum1 = %d, num2 = %d", num1, num2);

    swap(&num1, &num2);

    printf("\n\nAfter swapping:");
    printf("\nnum1 = %d, num2 = %d", num1, num2);

    return 0;
}
