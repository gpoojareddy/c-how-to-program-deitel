/* Sum and Average of Integers*/
#include<stdio.h>
int main(void){
int n,num,i;
int sum = 0;
float avg;
printf("Enter number of values to be entered:");
scanf("%d",&n);
for(i = 1; i <= n;i++){
printf("Enter integers:");
scanf("%d",&num);
sum = sum + num;
}
avg = sum / n;
printf("Sum of numbers is:%d\n",sum);
printf("Average of numbers is:%.2f\n",avg);
}
