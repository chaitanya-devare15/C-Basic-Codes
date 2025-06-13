#include<stdio.h>
int main()
{
    int num;
    printf("\n ENTER ANY NUMBER:");
    scanf("%d",&num);
    if(num%2==0)
    printf("\nNUMBER IS EVEN");
    else
    printf("\nNUMBER IS ODD");
    return 0;
}