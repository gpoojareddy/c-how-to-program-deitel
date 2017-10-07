#include<stdio.h>
void main(){
float u,a,t,v,s;
printf("Enter Velocity, Accelaration and time:");
scanf("%f %f %f",&u, &a, &t);
v = u + (a * t);
s =  (u * t) + (0.5 * a * (t * t));
printf("Final velocity: %f\n",v);
printf("Distance travelled: %f", s);
}
