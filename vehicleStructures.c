#include<stdio.h>

struct vehicleData
{
    int vehicleNumber;
    char vehicleCategory[10];
    char fuelType[10];
};

void main()
{
    struct vehicleData vehicle1,*pointerVariable;
    pointerVariable=&vehicle1;
    scanf("%d %s %s", &vehicle1.vehicleNumber, vehicle1.vehicleCategory, vehicle1.fuelType);
    printf("%d %s %s\n",vehicle1.vehicleNumber, vehicle1.vehicleCategory, vehicle1.fuelType);
    printf("%d %s %s", pointerVariable -> vehicleNumber, pointerVariable -> vehicleCategory, pointerVariable -> fuelType);
    
}