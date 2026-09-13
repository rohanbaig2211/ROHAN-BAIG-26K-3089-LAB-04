#include<stdio.h>
int main()
{
 int no_pf_late_days ; 
 print("ENTER NUMBER OF LATE DAYS :");
 scanf("%d",&no_pf_late_days);

 if (no_pf_late_days == 0)
 {
    printf("No Fine");
 }

 else if (1 > no_pf_late_days  > 5)
 {
    printf("Fine: Rs. 50");
 }

 else if (6 > no_pf_late_days > 10)
 {
    printf("Fine: Rs. 100");
 }

 else
 {
    printf("Fine: Rs. 200");
 }

 

 return 0 ;
}
