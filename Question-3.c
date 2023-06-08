#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    while(1)
    {
        printf("Enter a day number: ");
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
            printf("Hi, thanks for your message!\n\n");
            break;
        case 2:
            printf("Dear Shukla\n\n");
            break;
        case 3:
            printf("In the meantime, you can check out our help center full of answers to frequently asked questions here\n\n");
            break;
        case 4:
            printf("Ho ho ho! \n\n");
            break;
        case 5:
            printf("Hey there, how can I help you?n\n");
            break;
        case 6:
            printf("Happy Valentine's Day \n\n");
            break;
        case 7:
            printf("Hey Shukla Happy Mother's Day!\n\n");
            break;
        case 0:
            exit(0);
        default:
            printf("Invalid Input\n\n");
        }//end switch
    }//end while
}
