
#include <stdio.h>
#include "sensor.h"

void readSensors(struct Sensor s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Sensor %d Details\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &s[i].id);

        printf("Enter Value: ");
        scanf("%f", &s[i].value);

        printf("Enter Timestamp: ");
        scanf("%d", &s[i].timestamp);

        printf("Enter Status: ");
        scanf("%19s", s[i].status);
    }
}

void displaySensors(struct Sensor s[], int n)
{
    int i;

    printf("\n--- Sensor Readings ---\n");

    for(i = 0; i < n; i++)
    {
        printf("\nID: %d", s[i].id);
        printf("\nValue: %.2f", s[i].value);
        printf("\nTimestamp: %d", s[i].timestamp);
        printf("\nStatus: %s\n", s[i].status);
    }
}

void calculateStats(struct Sensor s[], int n)
{
    float sum = 0, min, max, avg;
    int i;

    min = max = s[0].value;

    for(i = 0; i < n; i++)
    {
        sum += s[i].value;

        if(s[i].value < min)
            min = s[i].value;

        if(s[i].value > max)
            max = s[i].value;
    }

    avg = sum / n;

    printf("\nAverage = %.2f", avg);
    printf("\nMinimum = %.2f", min);
    printf("\nMaximum = %.2f\n", max);
}
