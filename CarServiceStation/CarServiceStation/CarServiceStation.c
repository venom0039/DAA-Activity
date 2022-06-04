#define _CRT_SECURE_NO_WARNINGS //Security worning Disable

#include <stdio.h>
#include <stdbool.h>

int main()
{
    char name[50], vrn[15];
    int millage, vtype, servs[5] = { 0, 0, 0, 0, 0 }, temp = 0, n = 0, loycode, loytemp, totalbill = 0;
    bool loop1 = true;
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
    printf("    Vehicle Type Code            Vehicle Type \n");
    printf("        1                             Car          \n");
    printf("        2                             Cab          \n");
    printf("        3                             Jeep/SUV     \n");
    printf("        4                             Van          \n");
    printf("Vehicle Type: ");
    scanf("%d", &vtype);
    printf("___________________________________________________\n");
    
    printf("Enter one by one services you need.\n");
    printf("     Service CODE                      Vehicle Type \n");
    printf("        1                           Body Wash           \n");
    printf("        2                           Engine Oil Change   \n");
    printf("        3                           Gear Oil Change     \n");
    printf("        4                           Wax                 \n");
    printf("        5                           Cut & Polish        \n");
    printf("        6                           End                 \n\n");

    while (loop1) {
        printf("Enter services: ");
        scanf("%d", &temp);
        if (temp == 6) {
            loop1 = false;
        }
        else {
            servs[n] = temp;
        }
        n++;
    }

    //Loyality code
    printf("\nEnter customer Loyalty code [4 digits]: ");
    scanf("%d", &loycode);

    //Print Bill
    printf("\n\n                 ------------- Invoice ------------- \n");
    printf("             ........... Car Service Station ........... \n");
    printf("\t\tName: %s \n", name);
    printf("\t\tVIN: %s \n", vrn);
    printf("\t\tMillage: %d \n", millage);
    printf("\t\t-----------------------------------\n");
    for (int i = 0; i < 5; i++) {
        if (servs[i] == 1) {
            printf("\t\tBody Wash                %d\n", service[0][vtype - 1]);
            totalbill = totalbill + service[0][vtype - 1];
        }
        else if (servs[i] == 2) {
            printf("\t\tEngine Oil Change        %d\n", service[1][vtype - 1]);
            totalbill = totalbill + service[1][vtype - 1];
        }
        else if (servs[i] == 3) {
            printf("\t\tGear Oil Change          %d\n", service[2][vtype - 1]);
            totalbill = totalbill + service[2][vtype - 1];
        }
        else if (servs[i] == 4) {
            printf("\t\tWax                      %d\n", service[3][vtype - 1]);
            totalbill = totalbill + service[3][vtype - 1];
        }
        else if (servs[i] == 5) {
            printf("\t\tCut & Polish             %d\n", service[4][vtype - 1]);
            totalbill = totalbill + service[4][vtype - 1];
        }
    }

    printf("\t\t-----------------------------------\n");

    //calculate service charges
    temp = totalbill * 0.1;
    printf("\t\tService Charge (10%%)       %d\n", temp);
    totalbill = totalbill * 1.1;

    //loyality Discount
    if (totalbill > 15000) {
        if (loycode >= 1000 && loycode < 3000) {
            temp = totalbill * 0.025;
            printf("\t\tLoyality Discount (2.5%%)  %d\n", temp);
            totalbill = totalbill * 0.975;
        }
        else if (loycode >= 3000 && loycode < 5000) {
            temp = totalbill * 0.05;
            printf("\t\tLoyality Discount (5%%)    %d\n", temp);
            totalbill = totalbill * 0.95;
        }
        else if (loycode >= 5000 && loycode < 7000) {
            temp = totalbill * 0.07;
            printf("\t\tLoyality Discount (7%%)    %d\n", temp);
            totalbill = totalbill * 0.93;
        }
        else if (loycode >= 7000 && loycode < 10000) {
            temp = totalbill * 0.1;
            printf("\t\tLoyality Discount (10%%)   %d\n", temp);
            totalbill = totalbill * 0.9;
        }
    }

    //calculate tax
    temp = totalbill * 0.15;
    printf("\t\tTax (15%%)                 %d\n", temp);
    totalbill = totalbill * 1.15;

    //Total Bil
    printf("\t\t-------------------------------------\n");
    printf("\t\tTotal Bill                %d\n", totalbill);
    printf("\t\t-------------------------------------\n");

    //Engine Oil change
    for (int i = 0; i < 5; i++) {
        if (servs[i] == 2) {
            printf("\t\tNext Engine Oil Change   %dKM\n", millage+ 5000);
        }
    }
    //Gear Oil change
    for (int i = 0; i < 5; i++) {
        if (servs[i] == 3) {
            printf("\t\tNext Gear Oil Change     %dKM\n", millage + 40000);
        }
    }

    return 0;
}