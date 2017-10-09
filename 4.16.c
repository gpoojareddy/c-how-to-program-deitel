/* Astericks triangular patterns*/

#include<stdio.h>
int main(void){
/* 
*
**
***
****
*****
******
*******
********
*********
**********
*/
for(int i = 1; i <= 10; i++){
 for(int j = 1; j <= i; j++){
  printf("*");
 }
 printf("\n");
}
printf("\n");
/*
**********
*********
********
*******
******
*****
****
***
**
*
*/
for(int i = 10; i >= 1; i--){
 for(int j = 1; j <= i ; j++){
  printf("*");
 }
 printf("\n");
}
printf("\n");

/*

**********
*********
********
*******
******
*****
****
***
**
*

*/
for(int i = 1; i <=10 ; i++){
 for(int j = 10; j >= i;j--){
  printf("*");
 }
 printf("\n");
 for(int k = 1; k<=i; k++){
  printf(" ");
 }
}
printf("\n");
/*

*
**
***
****
*****
******
*******
********
*********
**********

*/
for(int i = 1; i <=10 ; i++){
 for(int j = 10; j >= i;j--){
  printf(" ");
 }
 for(int k = 1; k<=i; k++){
  printf("*");
 }
 printf("\n");
}
}
