
#include <stdio.h>

struct Sensor {
    int ID;
    float value;
    char timestamp[20];
    char status[10];
};

int main() {
    struct Sensor s[10];
    float sum = 0, min, max, avg;

    for (int i = 0; i < 10; i++) {
        printf("\nEnter Sensor ID: ");
        scanf("%d", &s[i].ID);

        printf("Enter Value: ");
        scanf("%f", &s[i].value);

        printf("Enter Timestamp: ");
        scanf("%19s", s[i].timestamp);

        printf("Enter Status: ");
        scanf("%9s", s[i].status);
    }

    min = max = s[0].value;

    for (int i = 0; i < 10; i++) {
        sum += s[i].value;

        if (s[i].value < min)
            min = s[i].value;

        if (s[i].value > max)
            max = s[i].value;
    }

    avg = sum / 10;

    printf("\nAverage = %.2f", avg);
    printf("\nMinimum = %.2f", min);
    printf("\nMaximum = %.2f\n", max);

    return 0;
}
