/* Calculating Credit limits of a company*/
#include<stdio.h>
void main(){
long accno;
int credit,currBal,newCredit;
 for(int i = 1; i <=3 ; i++){
 printf("\nEnter customer's account number:");
 scanf("%ld",&accno);
 printf("Enter customer's credit limit before the recession:"); 
 scanf("%d",&credit);
 printf("Enter customer's current balance:");
 scanf("%d",&currBal);
 newCredit = credit/2;
 printf("\nNew credit limit for customer with account nmmber '%ld' is %d\n\n",accno,newCredit);
  if(currBal > newCredit){
  printf("\nThis customer's current balance exceeds new credit limits!!!\n\n");
  }
 }
}
