#include<stdio.h>
int main(){
    int n;
    printf("ENTER NUM PLEASE:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("\n%d",i*n);
    } 
    return 0;
}