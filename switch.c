#include<stdio.h>
#include<math.h>


int main()

{
 int day;
  printf("\nENTER DAY");
  scanf("%d",&day);
 switch(day)
 {
    case 1 :printf("monday\n");
                 break;

    case 10:printf("tuesday\n");
                 break;

    case 3 :printf("wednsday\n");
                 break;

    case 4:printf("thursday\n");
                break;

    case 5:printf("friday\n");
                break;

    case 6:printf("saturday\n");
               break; 

    case 7:printf("sunday\n");
               break;   
 }
  return 0;
}