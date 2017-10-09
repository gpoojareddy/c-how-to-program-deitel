#include<stdio.h>
int main(void){
int i;
printf("CELSIUS\tFAHRENHEIT\n");
for(i = 30; i <= 50; i++){
printf("%4d\t%5d\n",i,(i*9/5)+32);
}
}
