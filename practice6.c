#include <stdio.h>

int main() {
    int age1,age2,age3;
    printf("ENTER PERSON 1 AGE");
    scanf("%d",&age1);
    
     printf("ENTER PERSON 2 AGE");
    scanf("%d",&age2);
    
     printf("ENTER PERSON 3 AGE");
    scanf("%d",&age3);
    
  /*  if(age1>age2 && age1>age3){
        printf("person 1 is greater than person 2 and person 3");
    }
    else if(age2>age1 && age2>age3){
        printf("person 2 is greter than person 1 and person 3");
    }
    else if(age3>age1 && age3>age2){
        printf("person 3 is greater than person 1 and person 2");
    }*/
  if(age2>age1 && age3>age1){
     printf("person 2 and person 3 is greater than  person 1");
 }
 else if(age1>age2 && age3>age2){
     printf("person 1 and person 3 is greater than  person 2");
 }
 else if(age2>age3 && age1>age3){
     printf("person 2 and person 1is greater than  person 3");
 }
 else
 {
     printf("both are equal");
 }
 
    return 0;
}

