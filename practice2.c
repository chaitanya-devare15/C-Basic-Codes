#include<stdio.h>
int main(){
float a , b, c ,d ,f,p;
printf("\nENTER MARKS OF MATH");
scanf("%f",&a);

printf("\nENTER MARKS OF SCIENCE");
scanf("%f",&b);

printf("\nENTER MARKS OF ENGLISH");
scanf("%f",&f);


c=a+b+f;
p=c*100/300;
printf("\n total marks:%f",c);
printf("\n percentage is:%f",p);
if(90<p){
  printf("\nA+ grade");
}
else if(80<=p){
    printf("\n A grade");
    printf("\nTHANK YOU");
}
    else if(70<=p){
    printf("\n B+ grade");
    }
    else if(60<=p)
    {
        printf("\n B grade");
    }
    else if(50<=p)
    { 
        printf("\nC grade");
    }
    else
    {
        printf("\n FAIL");
    }
    
        

return 0;
}