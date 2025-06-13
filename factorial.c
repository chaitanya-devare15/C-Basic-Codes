#include<stdio.h>
int main()
{
       int n,i,f=1;
       printf("\nenter the number");
       scanf("%d",&n);
       for(i=n; i>=1; i--)
    {
        f=f*i;
    }
        printf("\nfactorial=%d",f);
        return 0;
}