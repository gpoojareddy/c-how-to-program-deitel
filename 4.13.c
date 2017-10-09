/* Natural numbers Arithmetic */
#include<stdio.h>
int main(void){
int num,i,sum = 0,Sqsum = 0, Csum = 0;
printf("Enter a natural number:");
scanf("%d",&num);
for(i = 1; i <= num; i++){
sum = sum + i;
Sqsum = Sqsum + (i*i);
Csum = Csum + (i*i*i);
}
printf("Sum of numbers from 1 to %d is:%d\n",num,sum);
printf("Sum of Square of numbers from 1 to %d is:%d\n",num,Sqsum);
printf("Sum of Cubes of numbers from 1 to %d is:%d\n",num,Csum);
}
