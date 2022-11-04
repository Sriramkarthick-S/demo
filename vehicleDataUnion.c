#include<stdio.h>

union vehicleData
{
    char vehicleNumber[20];
    char vehicleCategory[10];
    char fuelType[10];
};

void main()
{
    union vehicleData vehicle1,vehicle2;
    scanf("%s %s %s", vehicle1.vehicleNumber, vehicle1.vehicleCategory, vehicle1.fuelType);
    printf("%s %s %s\n",vehicle1.vehicleNumber, vehicle1.vehicleCategory, vehicle1.fuelType);
    scanf("%s %s %s", vehicle2.vehicleNumber, vehicle2.vehicleCategory, vehicle2.fuelType);
    printf("%s %s %s\n",vehicle2.vehicleNumber, vehicle2.vehicleCategory, vehicle2.fuelType);
}