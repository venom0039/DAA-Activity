#define _CRT_SECURE_NO_WARNINGS //Security worning Disable

#include <stdio.h>

int main()
{
    char name[50], vrn[15];
    int millage, vtype;
    int service[5][4] = { {500, 750, 1000, 1250}, {10000, 12500, 15000, 17000}, {20000 , 22000, 25000, 28000}, {1000, 1250, 1500, 2000}, {4500, 5000, 6000, 8000} };

    //Print Header
    printf("             ........... Car Service Station ........... \n");

    //Get Inputs
    printf("Name: ");
    scanf("%s", name);
    printf("Vehicle Registration Number: ");
    scanf("%s", vrn);
    printf("Mileage: ");
    scanf("%d", &millage);
    printf("Vehicle type code: \n\n");
    printf("    Vehicle Type Code            Vehicle Type ");
    printf("       01                             Car          \n");
    printf("       02                             Cab          \n");
    printf("       03                             Jeep/SUV     \n");
    printf("       04                             Van          \n");
    printf("Vehicle Type: \n");
    scanf("%d", &vtype);



    return 0;
}