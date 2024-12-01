#include<stdio.h>

int main ()
{ 
int age;
float fare;
printf("\n enter the age of passenger\n");
scanf("%d",&age);
printf("n enter the bus ticket fare\n");
scanf("%f",&fare);
if (age<14){
fare = fare-(0.5*fare);}
else if(age>50){
fare = fare-(0.2*fare);}
else if(14<age>50){
fare = fare-(0.1*fare);}
printf("\n bus ticket fare to be change after discount is %2f",fare);
return 0;
}
