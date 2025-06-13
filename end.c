#include<stdio.h>
int main()
{int n;
    do{
        printf("ENTER ANY NUMBER:");
        scanf("%d",&n);
         printf("%d\n",n);
         if(n%2 !=0){
            break;
         }
    }while(1);
    printf("END THANKYOU");
    return 0;
}
