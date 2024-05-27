#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int withdrawAmount[5], totalwithdraw[5];

struct Account
{
    int accn;
    char name[25];
    int amount;

} s[5];

int menu();
void deposit();
void withdraw();
void show();
void openaccount();

int count,password;

int main()
{
     printf("\n\n\t\t\t\t\t\t\t\t\t Welcome To The Shaka Bank\n\n");

        while (1)
        {

            count++;
            printf("Enter Password :");
            scanf("%d", &password);
            if (password == 123456)
            {
                printf("\nwelcome Sir \nShashikant sah\n");
                goto jump;
            }
            else
            {
                printf("Enter Valid Password\n");

                if (count >= 3)
                {
                    exit(0);
                }
            }

            // main bank function
        };
    jump:

    while (1)
    {
        switch (menu())
        {
        case 1:
            openaccount();
            break;
        case 2:
            deposit();
            break;
        case 3:
            withdraw();
            break;
        case 4:
            show();
            break;
        case 5:
            printf("\nExit Successfully\n");
            exit(0);
            break;

        default:
            printf("/n-----------------------Enter Valid Choice----------------------------");
        }
    }

    return 0;

} // end of main ------------------------------------------------------------------------------------------------------------------------



 // Account opening Function
void openaccount()                            
{
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter Account Number :");   // Account no.
        scanf("%d", &s[i].accn);

        printf("\nEnter Name :");             // Enter Name
        scanf("%s", &s[i].name);

        printf("\nEnter Deposit Amount:");   // Deposit Initial Amount 
        scanf("%d", &s[i].amount);
    printf("\n----------------------\n");
    }
};

// Deposit Amount Function
void deposit()                              
{
    int an, depositamount;                  // Account Deposit And Updation On Money.

    printf("Enter Account Number :");       // Individual Account No For Deposit Money.
    scanf("%d", &an);

    for (int i = 0; i < 5; i++)
    {
        if (an == s[i].accn)
        {
            printf("%s Enter Deposit Amount:", s[i].name);   
            scanf("%d", &depositamount);
            s[i].amount = s[i].amount + depositamount;
        }
        
    }
};
 
// Amount Withdraw Function
void withdraw()                    
{
    int an;
    printf("Enter Account Number :");     
    scanf("%d", &an);
    for (int i = 0; i < 5; i++)
    {
        if (an == s[i].accn)     // Check Account for Individual
        {

            printf("%s Please Enter Amount For Withdraw :\n", s[i].name);
            scanf("%d", &withdrawAmount[i]);
            if (withdrawAmount[i] <= s[i].amount)
            {
                s[i].amount = s[i].amount - withdrawAmount[i];
                totalwithdraw[i] = totalwithdraw[i] + withdrawAmount[i];
            }
            else
            {
                printf("\ninsufficient Balalnce");
            }
        }
    }
};

// Choice Or Menu Function For Below option--------------------------------->
int menu()
{
   
    int ch;
    printf("\n1.Open account");
    printf("\n2.Deposit Money");
    printf("\n3.Withdraw Money");
    printf("\n4.Show status");
    printf("\n5.Exit");
    printf("\n\nEnter Choice (from 1-5): ");
    scanf("%d", &ch);
    printf("\n----------------------\n");
    return ch;
};

// Showing All Account's Detail

void show()
{
    printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n\t\t\t\t\t\t\t**************** Account's Details ****************\n\n");
    printf("\t\t\t\t\tAccount Number\t\t\tName\t\t\tCurrent Balance\t\t\tWithdraw\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\n\t\t\t\t\t%d\t\t\t\t%s\t\t\t%d\t\t\t\t%d\n", s[i].accn, s[i].name, s[i].amount, totalwithdraw[i]);
    }
    printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
};
