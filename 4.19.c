/* Calculating sales */
#include<stdio.h>
int main(void){
int productNo, quantity;
float totalRetail;
printf("\nEnter the product number:");
scanf("%d",&productNo);
switch(productNo){
case 1:
printf("Retail price of this product is $2.98.");
break;
case 2:
printf("Retail price of this product is $4.50.");
break;
case 3:
printf("Retail price of this product is $9.98.");
break;
case 4:
printf("Retail price of this product is $4.49.");
break;
case 5:
printf("Retail price of this product is $6.87.");
break;
}
}

