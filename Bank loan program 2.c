/*
Name:Joseph Kahiga
Reg.No:CT100/G/30618/36
Date:26th September
Description:loan eligibility program
*/

#include<stdio.h>

int main() {
int age;
float income;
//prompt the user to enter age in years
printf("Enter your age :");
scanf("%d",&age);

//prompt the user to enter an aincome
printf("Enter your income:");
scanf("%f",&income);

//check loan requirements 
if(age>=21&&income>=21,000) {
printf("Congratulations you qualify for a loan.\n");
}
if(age<21&&income<21,000) {
printf("Unfortunately we are unable to offer you a loan at this time.\n");
}

return 0;
}
