#include<stdio.h>
int main()
{
    int i=1,n;
    printf("ENTER ANY NUMBER:");
    scanf("%d",&n);
    do
    {
        printf("\n%d",i*n);
        i++;
    } while (i<=10);
    
}