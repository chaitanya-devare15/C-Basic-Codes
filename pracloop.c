#include<stdio.h>
int main()
{
    int n;
    printf("\nENTER ANY NUMBER:");
    scanf("%d",&n);
    
    
    for(int i=1;n>=i;i++)
    {
      printf("%d\n",i);
    }
    
    return 0;
}

