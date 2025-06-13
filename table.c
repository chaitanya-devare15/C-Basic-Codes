#include<stdio.h>
int main()
{
    int i,n;
    printf("\nenter any number");
    scanf("%d",&n);
    for(i=1; i<=10; i++)
    {
        printf("\n%d",i*n);
    }
    return 0;

}