#include<stdio.h>
int main()
{
 int marks ; 
 printf("ENTER MARKS :");
 scanf("%d",&marks);

 int income ;
 printf("ENTER INCOME :");
 scanf("%d",&income);

if(marks > 80 || income < 50000)
{
    printf("student qualifies for the scholarship");
}
else
{
printf("student don't qualifies for the scholarship.");
}
    return 0 ;
}