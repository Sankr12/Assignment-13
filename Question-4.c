#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,i,j,k,hypotenuse,length,base;
    printf("1. Isosceles Triangle\n");
    printf("2. Right Angled Triangle\n");
    printf("3. Equilateral Triangle\n");
    printf("4. Exit\n\n");
    while(1)
    {
        printf("Enter a choice: ");
        while(scanf("%d",&a) !=1)
        {
            while(getchar() != '\n')
                continue;
            printf("Invalid Input Please Enter an Integer\n");
            break;
        }
        switch(a)
        {
        case 1:
            printf("Enter the sides of triangle: ");
            scanf("%d",&i);
            scanf("%d",&j);
            scanf("%d",&k);
            if(i==j || k==j || k==i)
                printf("Isosceles Triangle\n\n");
            else
                printf("Not Isosceles\n\n");
            break;
        case 2:
            printf("Enter the sides of the triangle: ");
            scanf("%d",&i);
            scanf("%d",&j);
            scanf("%d",&k);
            if(i>=j && i>=k)
            {
                hypotenuse=i;
                length=j;
                base=k;
            }
            else if(j>=k && j>=i)
            {
                hypotenuse=j;
                length=i;
                base=k;
            }
            else if(k>=j && k>=i)
            {
                hypotenuse=k;
                length=i;
                base=j;
            }
            if(hypotenuse==base*base+length*length)
                printf("It is a right angled triangle\n\n");
            else
                printf("Not Right angled Triangle\n\n");
            break;
        case 3:
            printf("Enter the sides of triangle: ");
            scanf("%d",&i);
            scanf("%d",&j);
            scanf("%d",&k);
            if(i==j && j==k)
                printf("Equilateral Triangle\n\n");
            else
                printf("Not Equilateral\n\n");
            break;
        default:
            printf("Invalid Input!\n\n");
            break;
        case 4:
            exit(0);
        }//end of switch

    }//end of while
}
