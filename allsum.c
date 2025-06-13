#include<stdio.h>
int main()
{
    int n;
    printf("\nKRUPAYA NUMBER TAKA:");
    scanf("%d",&n);

    int sum=0;
    for( int i=1;i<=n;i++)
    {
      sum = sum + i;
    }
    printf("\nsum is%d",sum);
    return 0;
}
//CODE WRITE BY CHAITANYA