#include<stdio.h>
int main()
{
    int n,i,flag=1;
    printf("\nEnter any number:");
    scanf("%d",n);
    if(n==1)
    {
        flag=1;
    }
    else
    {
        for(i=2;i<=n-1;i++)
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("\nNUMBER IS PRIME");
    }
    else
    {
        printf("\nNUMBER IS NOT PRIME");
    }
    return 0;
}
