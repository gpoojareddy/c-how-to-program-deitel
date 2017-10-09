/* Factorials of numbers upto 20*/
#include<stdio.h>
int main(void){
int i;
long long fact = 1;
printf("Number\tFactorial\n");
for(i = 1; i <= 20; i++){ 
fact = fact * i;
printf("%d \t %lld \n",i,fact);
}
}
