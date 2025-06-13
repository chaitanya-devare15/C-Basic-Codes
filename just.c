#include<stdio.h>
int main(){
    int i, v ,u;
    printf("what is your age today");
    scanf("%d",&i);
    printf("increase age");
    scanf("%d",&v);
    u=i+v;
    if(u>=100){
        printf("congratulations your completed century!%d",u);
    }
    else
    {
        printf("thank you %d",u);
    }
 return 0;
}
