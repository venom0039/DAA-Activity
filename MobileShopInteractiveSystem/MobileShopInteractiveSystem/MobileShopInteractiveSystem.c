#define _CRT_SECURE_NO_WARNINGS //Security worning Disable

#include <stdio.h>
#include <stdbool.h>

int main()
{
    char accno[10][10];
    int service[10], amount[10], conf, conf2, n = 0;
    bool validity = false, amountValidate = true, continuety = true;

    while(continuety) {
        amountValidate = true;
        validity = false;

        printf("        ............. Mobile Shop Interactive System ............. \n\n");
        printf("       ITEM CODE              NAME      \n");
        printf("           1              Dialog Reload   \n");
        printf("           3              Mobile Reload   \n");
        printf("           4              Airtel Reload   \n");
        printf("           5              Hutch Reload   \n");

        // Choose service and Enter Account Number
        printf("\tEnter Service Number: ");
        scanf("%d", &service[n]);
        printf("\tEnter Account Number: ");
        scanf("%s", accno);

        //Select first 3 Numbers from Account Number 

        //Validate Number
        if (service[n] == 1) {
            if ((accno[0][n] == 0) && (accno[1][n] == 7) && (accno[2][n] == 4)) {
                validity = true;
                printf("\tService Provider: Dialog \tAccount Number: %s\n", accno);
            }
            else if ((accno[0][n] == 0) && (accno[1][n] == 7) && (accno[2][n] == 6)) {
                validity = true;
                printf("\tService Provider: Dialog \tAccount Number: %s\n", accno);
            }
            else if ((accno[0][n] == 0) && (accno[1][n] == 7) && (accno[2][n] == 7)) {
                validity = true;
                printf("\tService Provider: Dialog \tAccount Number: %s\n", accno);
            }
        }
        else if (service[n] == 3) {
            if ((accno[0][n] == 0) && (accno[1][n] == 7) && (accno[2][n] == 0)) {
                validity = true;
                printf("\tService Provider: Mobitel \tAccount Number: %s\n", accno);
            }
            else if ((accno[0][n] == 0) && (accno[1][n] == 7) && (accno[2][n] == 1)) {
                validity = true;
                printf("\tService Provider: Mobitel \tAccount Number: %s\n", accno);
            }
        }
        else if (service[n] == 4) {
            if ((accno[0][n] == 0) && (accno[1][n] == 7) && (accno[2][n] == 2)) {
                validity = true;
                printf("\tService Provider: Hutch \tAccount Number: %s\n", accno);
            }
            else if ((accno[0][n] == 0) && (accno[1][n] == 7) && (accno[2][n] == 8)) {
                validity = true;
                printf("\tService Provider: Hutch \tAccount Number: %s\n", accno);
            }
        }
        else if (service[n] == 5) {
            if ((accno[0][n] == 0) && (accno[1][n] == 7) && (accno[2][n] == 5)) {
                validity = true;
                printf("\tService Provider: Airtel \tAccount Number: %s\n", accno);
            }
        }

        // Enter the ammount
        printf("\tEnter the ammount (LKR): ");
        while (amountValidate) {
            scanf("%d", &amount[n]);
            if (amount[n] <= 50) {
                printf("\tEnter the ammount (LKR): ");
            }
            else {
                amountValidate = false;
            }
        }

        printf("Press 1 to confirm and press 2 to cancel: ");
        scanf("%d", &conf);

        if (conf == true) {
            printf("Press 0 to continue and press any number to enter another: ");
            scanf("%d", &conf2);
            if (&conf2 == 0) {
                continuety = false;
            }
        }
    }
    
    //Loyelty number



    return 0;
}

