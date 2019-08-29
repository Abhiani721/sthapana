// A PROGRAM DESCRIBING APPROXIMATE PROCESS OF ATM//
#include <stdio.h>
int main()
{

    int a,e,f,g,h,j,op;
    char name[20];       // TAKES THE NAMES MAXIMUM UPTO 20 LETTERS//
    printf("\t\t\tWELCOME TO KAMATH BANK\n\n");
    printf("Enter your card.Please do not remove the card once slotted\n\n");
    printf("Select the choice you wish to choose\n\n");
    printf("\n1.Pin Change\t");
    printf("2.Account Information\n\n");
    printf("3.Cash\n\n");
    scanf("%d",&op);
    switch(op)
    {
        case 1: printf("Enter the four numbered pin\n");
                fflush(stdin);
                scanf("%d",&a);
                printf("\n\nEnter the new pin\n");
                fflush(stdin);
                scanf("%d",&h);
                printf("\n\nCONGRATULATIONS! pin successfully changed to %d\n",h);
                printf("\n\nThank You, Visit again\n\n\n\n");
                break;

        case 2: printf("Enter your name \n");
                fflush(stdin);
                scanf("%s",name);
                printf("\nEnter four numbered pin\n");
                fflush(stdin);
                scanf("%d",&j);
                printf("\n\nNAME: %s",name);
                printf("\n\nACCOUNT NUMBER : AC0987689453789\n");
                printf("\nBALANCE : Rs 10000\n");
                printf("\n\nThank You, Visit again\n\n\n\n");
                break;


        case 3: printf("A maximum of 2000Rs can be taken at a time\n");
                printf("\n\nEnter the amount you wish to withdraw\n");
                fflush(stdin);
                scanf("%d",&e);
                printf("\n\nEnter the type of denominations you wish to take\n\n");
                printf("1.100s\t");
                printf("2.500s\n");
                fflush(stdin);
                scanf("%d",&f);
                printf("\n\nEnter the four numbered pin\n");
                fflush(stdin);
                scanf("%d",&a);
                printf("\n\nWould you like to collect the receipt or want to save the papers\n");
                printf("1.PRINT\n");
                printf("2.DONT PRINT\n\n");
                fflush(stdin);
                scanf("%d",&g);
                printf("\n\nCollect the amount from the collect box\n");
                printf("\n\nThank you, visit again\n\n\n\n");
                break;

}
    return 0;
}
