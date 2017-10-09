/* List of all prime numbers upto 100*/
#include<stdio.h>
int main(void){
int i,j;
for(i = 2; i < 100; i++){
 for(j = 2; j <=i; j++){
  if(i%j == 0){
    break;
  }
 }
  if(i == j){
    printf("\n%d",j);
  }
}
}
