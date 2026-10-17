/*
Name:Joseph kahiga 
Reg No:CT100/G/30618/26
Date:26th September
Description:Student exam eligibility
*/
#include<stdio.h>

int main() {
float Attendance;
float Average_marks;

//prompt  user to enter Attendance
printf("Enter Attendance: ");
scanf("%f", &Attendance);

//prompt user to enter Average marks
printf("Enter Average marks: ");
scanf("%f", &Average_marks);

//check user exam eligibility
if(Attendance>=75 && Average_marks>=40) {
printf("Eligible\n");
} else{
printf("Not eligible\n");
}

return 0;

}