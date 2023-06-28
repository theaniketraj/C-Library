#include<stdio.h>

struct vehicles
{
    int wheels;
    char vname[20];
    char color[10];
} v1 = { 4, "Hennessy", "Black"};

int main()
{
    printf("Vehicle no. of wheels: %d", v1.wheels);
    printf("\nVehicle Name: %s", v1.vname);
    printf("\nVehicle Color: %s", v1.color);
    return 0;
}
