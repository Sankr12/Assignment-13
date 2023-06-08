/*  Write a menu driven program with the following options:
    a. Addition
    b. Subtraction
    c. Multiplication
    d. Division
    e. Exit     */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int X,Y,y;
    char x;

        printf("a. Addition\n");
        printf("b. Subtraction\n");
        printf("c. Multiplication\n");
        printf("d. Division\n");
        printf("e. Exit\n\n");
    while(1)
    {
        printf("Enter a Choice: ");
        while (scanf(" %c", &x) != 1)
    {
        // Clear the input buffer
        while (getchar() != '\n')
            continue;

        printf("Invalid input. Please enter a valid character: ");
    }

        switch(x)
        {
        case 'a':
        case 'A':
        printf("Enter two Numbers: ");
            scanf("%d",&X);
            scanf("%d",&Y);
            printf("Sum = %d\n\n",X+Y);
            break;
        case 'b':
        case 'B':
            printf("Enter two Numbers: ");
            scanf("%d",&X);
            scanf("%d",&Y);
            printf("Subtraction = %d\n\n",X-Y);
            break;
        case 'C':
        case 'c':
            printf("Enter two Numbers: ");
            scanf("%d",&X);
            scanf("%d",&Y);
            printf("Multiplication = %d\n\n",X*Y);
            break;
        case 'd':
        case 'D':
            printf("Enter two Numbers: ");
            scanf("%d",&X);
            scanf("%d",&Y);
            if(X<Y)
                {
                printf("Please Enter Numerator Greater than Denominator\n\n");
                }
            else if(Y==0)
            {
                printf("Invalid Denominator\n\n");
            }
            else{
                y=X/Y;
                printf("Division = %f\n\n",(float)y);
            }
            break;
        case 'e':
        case 'E':
            exit(0);
      }//end of switch
    }//end of while
}
