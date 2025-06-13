#include<stdio.h>
int main()
{
    int age;
    printf("\nENTER YOUR AGE:");
    scanf("\n%d",&age);
    if(18<=age)
    {
        printf("\nYOU ARE ELIGIBLE CANDIDATE FOR VOTING");
        printf("\nTHANK YOU");
        printf("\nVigit Again");
    }
     else if(18>=age &&13<age)
     {
       printf("\nYOU ARE TEENAGER YOU CAN APPLY FEW YEARS");
       printf("\nSORRY");
       printf("\nVigit Again");
     }
     else
     {
        printf("\nYOU ARE CHILD");
        printf("\nSO SORRY NEXT TIME");
        printf("\nVigit Again");
     }
     return 0;
} 