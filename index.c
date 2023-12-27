
#include <stdio.h>

int main()
{
    // question=1
    float f = ( 38 * 9/5 ) + 32;
    printf("%f",f);


    // question=2
       float basesalary;
    float HRA;
    float DA;
    float TA;
    float grosssalary;
    
    printf("enter basesalary");
    scanf("%f",&basesalary);
    
    printf("enter HRA");
    scanf("%f",&HRA);
    
    printf("enter DA");
    scanf("%f",&DA);
    
     printf("enter TA");
    scanf("%f",&TA);
    
    HRA =(HRA/100*100);
    DA=(DA/100*100);
    TA =(TA/100*100);
     
   grosssalary=basesalary+HRA+DA+TA;
    
     printf("%f",grosssalary);  






    // question=3
    int first=65;
int second=45;
int sum=first+second;
int three=180-sum;
printf("%d",three);
    
    return 0;
}