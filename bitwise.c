
#include <stdio.h>
int main()
{
    int n, pos, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;
    while (temp > 0)
    {
        count += temp & 1;
        temp = temp >> 1;
    }
    printf("Set bits = %d\n", count);
    printf("Enter bit position: ");
    scanf("%d", &pos);
    printf("After setting bit = %d\n", n | (1 << pos));
    printf("After clearing bit = %d\n", n & ~(1 << pos));
    printf("After toggling bit = %d\n", n ^ (1 << pos));

    return 0;
}
