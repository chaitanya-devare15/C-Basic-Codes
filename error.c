#include<stdio.h>
void swap(int a, int b );
void main(){
    int x,y;
    printf("'\nEnter the value of x");
    scanf("%d",&x);
          
    printf("\nEnter the value of y");
    scanf("%d",&y);
    printf("\n Before calling swap function");
    printf("\n value of x=%d,value of y=%d\n",x,y);
    printf("\n After returning from swap function");
    printf("\n value of x=%d,value of y=%d\n",x,y);
    
}

/* void swap(int a, int b)
 {
    int temp;
   
    printf("inside the function\n");
    printf("in value of a=%d,value of b=%d before swap \n",a,b);
    temp=a;
    a=b;
    b=temp;
printf("in value of a=%d,value of b=%d after swap \n",a,b);
    

}*/