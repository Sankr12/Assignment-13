//Write a program which takes the month number as an input and display number of days in that month.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=1,b,c,d,e;
    while(1)
    {
        printf("Enter the number of month: ");
        while (scanf("%d", &a) != 1)
    {
        // Clear the input buffer
        while (getchar() != '\n')
            continue;

        printf("Invalid input. Please enter a valid integer: ");
    }

        switch(a)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 Days\n\n");
            break;
        case 2:
            printf("28 Days\n\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 Days\n\n");
            break;
        default:
            printf("Invalid Choice\n\n");
            break;
        case 0:
            exit(0);
        }//end of switch
    }//end of while
}
