
#include <stdio.h>
#include "sensor.h"

int main()
{
    struct Sensor s[10];

    readSensors(s, 10);

    displaySensors(s, 10);

    calculateStats(s, 10);

    return 0;
}
