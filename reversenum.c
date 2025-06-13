#include<stdio.h>
int main()
{

    int n;
    printf("\nENTER ANY NUMBER:");
    scanf("%d",&n);
    for(int i=n;i>=0;i--)
    {
        printf("\n%d",i);
    }
    return 0;
}