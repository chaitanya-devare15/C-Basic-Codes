#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,u,i;
    printf("\nENTER ANY NUMBER:");
    scanf("%d",&u);

    printf("\n%d\n%d",a,b);
    for(int i=1;i<=u;i++)
    {
        c=a+b;
        printf("\n%d",c);
        a=b;
        b=c;
    }
    return 0;
}