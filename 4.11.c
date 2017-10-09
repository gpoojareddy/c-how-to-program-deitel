/* Sum of all multiples of 7 from 1 to 100*/
#include<stdio.h>
int main(void){
int i,sum = 0;
for(i = 7; i <=100 ; i = i+7){
sum = sum + i;
}
printf("Sum of all multiples of 7 between 1 and 100 is:%d\n", sum);
}
