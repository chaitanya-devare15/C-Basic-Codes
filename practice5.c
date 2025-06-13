#include<stdio.h>
int main()
{
    int num;
    printf("enter any num:");
    scanf("%d",&num);
    if(num%2==0){
        printf("\nnum is Lucky");
    }
    else
    {
        printf("\nnum is UNLUCKY");
    }
    return 0;
}