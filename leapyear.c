#include<stdio.h>
int main()
{
 int year;
 printf("please enter the year:");
 scanf("\n%d",&year); 
 if(year%4==0)
 {
    printf("\nyear is leap year");
 }
 else
 {
   printf("\n year is not leap year");
 }
      return 0;

}
