
#ifndef SENSOR_H
#define SENSOR_H

struct Sensor
{
    int id;
    float value;
    int timestamp;
    char status[20];
};

void readSensors(struct Sensor s[], int n);
void displaySensors(struct Sensor s[], int n);
void calculateStats(struct Sensor s[], int n);

#endif
