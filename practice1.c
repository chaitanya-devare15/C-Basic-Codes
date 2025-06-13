#include<stdio.h>
int main()
{
    int i;
    printf("\nENTER 1 TO 5 NUM FOR MARRIAED OR 6 TO 10 NUM FOR UNMARRIED :");
    scanf("%d",&i);
    if(i<=5)
    {
        printf("\nCONGRATULATION");
    }
    else if(i<=10)
    {
        printf("\nALL THE BEST");
    }
    else
    {
        printf("\nWRONG INPUTE");
    }
    return 0;
}