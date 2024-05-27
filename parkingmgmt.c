
// This Parking Management Project is created By Shashikant Sah on 05-06/03/2024 ,1st project.

#include <stdio.h>
#include <stdlib.h>

int nob = 0, noc = 0, nofcar = 0, nor = 0, count = 0, amount = 0; // Number of ...
int buscount = 0, cyclecount = 0, rikshawcount = 0, carcount = 0, totalbusamount = 0, totalcaramount = 0, totalrikshawamount = 0, totalcycleamount = 0;

int Menu();
void EnterBus();
void EnterCycle();
void EnterRikshaw();
void EnterCar();
void status();
void delete();
void finalreport();

int main()
{
    printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t\t\tParking Management System\n\n");
    printf("\t\t\t\t\t\t\t\t\t***** Charges For Parking Are Below *****\n");
    printf("\n\t\t\t\t\t\t\t\t\t\tBus      :100Rs \n\t\t\t\t\t\t\t\t\t\tCycle    :20 \n\t\t\t\t\t\t\t\t\t\tRikshaw  :50rs \n\t\t\t\t\t\t\t\t\t\tcar      :80\n");
    printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

    while (1)
    {
        switch (Menu())
        {
        case 1:
            EnterBus();
            break;
        case 2:
            EnterCycle();
            break;
        case 3:
            EnterRikshaw();
            break;
        case 4:
            EnterCar();
            break;
        case 5:
            status();
            break;
        case 6:
            delete ();
            break;

        case 7:
            exit(0);

        case 8:
            finalreport();
            break;

        default:
            printf("\n\n-----InValid Choice-----\n\n");
        }
    };
    return 0;
}

// For Bus Entry
void EnterBus()
{
    //++nob;
    nob = nob + 1;                           // Count bus
    amount = amount + 100;                   //All Amount Including Overall Calculating
    totalbusamount = totalbusamount + 100;   // Bus Amount Count
    count++;                                 // This For Overall Vehicle Counting
    buscount++;                              // Only Bus Counting
    printf("Bus Succesfully\n");
}

// For cycle Entry
void EnterCycle()
{
    noc = noc + 1;
    amount = amount + 20;
    totalcycleamount = totalcycleamount + 20;
    count++;
    cyclecount++;
    printf("Cycle Succesfully\n");
}

// For Car Entry
void EnterCar()
{
    nofcar++;
    amount = amount + 80;
    totalcaramount = totalcaramount + 80;
    count++;
    carcount++;
    printf("Car Succesfully\n");
}

// For Rikshaw Entry
void EnterRikshaw()
{
    nor = nor + 1;
    amount = amount + 50;
    totalrikshawamount = totalrikshawamount + 50;
    count++;
    rikshawcount++;
    printf("Rikshaw Succesfully\n");
}

// For Showing Current Status
void status()
{
    printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t ---------------PARKING CURRENT STATUS---------------\n\n ");

    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Total Bus         : %d\n", nob);     // Number Of Bus
    printf(" \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Total Cycle       : %d\n", noc);    // Number Of Cycle
    printf(" \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Total Car         : %d\n", nofcar); // Number of Car
    printf(" \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Total Rikshaw     : %d\n", nor);    // Number of Rikshaw
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t --------------------------\n");
    printf(" \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Total Vehicle     : %d\n", count); // Count Total  Vehicle
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t --------------------------\n");
    printf(" \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Total Amount Gain : %drs \n", amount); // Total Amount Earned

    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t ------------------------------------------------------\n\n");
}

// Deleting All Entry
void delete()
{
    printf("\nDeleting Succesfully\n");
    nob = 0;
    noc = 0;
    nor = 0;
    nofcar = 0;
    count = 0;
    amount = 0;

    // final report
    carcount = 0;
    buscount = 0;
    cyclecount = 0;
    rikshawcount = 0;
}

// Choice Option Menu
int Menu()
{
    int ch;
    printf("----------------------------\n");
    printf("\t\t\t\t1.Enter Bus             \n");
    printf("\t\t\t\t2.Enter Cycle           \n");
    printf("\t\t\t\t3.Enter Rikshaw         \n");
    printf("\t\t\t\t4.Enter Car             \n");
    printf("\t\t\t\t5.SHow Status \n");
    printf("\t\t\t\t6.Delete \n");
    printf("\t\t\t\t7.Exit\n");
    printf("\t\t\t\t8.Final Report          \n");

    printf("----------------------------\n");
    printf("\nEnter Choice :");
    scanf("%d", &ch);

    return ch;
}

void finalreport()
{
    printf("\n............................................ FINAL REPORT OF PARKING ............................................\n");
    printf("\nTotal Bus Entered      :  %d", buscount);
    printf("\nTotal Bus Amount       :  %d\n", totalbusamount);

    printf("\nTotal Cycle Entered    :  %d", cyclecount);
    printf("\nTotal Cycle Amount     :  %d\n", totalcycleamount);

    printf("\nTotal Rikshaw Entered  :  %d", rikshawcount);
    printf("\nTotal Rikshaw Amount   :  %d\n", totalrikshawamount);

    printf("\nTotal Car Entered      :  %d", carcount);
    printf("\nTotal Car Amount       :  %d\n", totalcaramount);
    printf("\n.................................................................................................................\n");
    printf("Total Amount Obtained    :  %d",totalbusamount+totalcaramount+totalcycleamount+totalrikshawamount);
    printf("\n.................................................................................................................\n");
    exit(0);
}
// total vehicle entered