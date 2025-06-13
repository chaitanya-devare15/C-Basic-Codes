#include<stdio.h>
int main()
{
    int marks;
    printf("\nENTER YOUR MARKS:");
    scanf("%d",&marks);
    if(90<=marks)
    {
        printf("\nCONGRATILATION YOU ARE PASSED A+ GRADE");
        printf("\nTHANK YOU \nvisit again");
    }
    else if(80<=marks)
    {
        printf("\nCONGRATS YOU ARE PASSED A GRADE");
         printf("\nTHANK YOU \nvisit again");
    }
    else if(70<=marks)
    {
       printf("\nYOU ARE PASSED B GRADE");
        printf("\nTHANK YOU \nvisit again");
    }
    else if(60<=marks)
    {
        printf("\nYOU ARE PASSED C GRADE"); 
         printf("\nTHANK YOU \nvisit again");
    }
    else if(50<=marks)
    {
        printf("\n FOCUS ON STUDY YOU ARE PASSED D GRADE");
         printf("\nTHANK YOU \nvisit again");
    }
     else
     {
        printf("\nYOU ARE FAIL NEXT TIME BETTER LUCK");
        printf("\nYOU ARE JOINING CHAITANYA DEVARE STUDY CENTER");
         printf("\nTHANK YOU \nvisit again");
     }
     return 0;
    
}