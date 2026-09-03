#include <stdio.h>

int main(){

float loan;
float annualRate, monthlyRate, monthlyPayment;
float firstMonth, secondMonth, thirdMonth;

printf("Enter loan amount: ");
scanf("%f", &loan);

printf("Enter Interest anually: ");
scanf("%f", &annualRate);

printf("Enter MonthlyPayment amount: ");
scanf("%f", &monthlyPayment);

monthlyRate = (annualRate / 100.0f) / 12.0f;


firstMonth = (loan +(monthlyRate * loan)) - monthlyPayment;
secondMonth = (firstMonth +(monthlyRate * firstMonth)) - monthlyPayment;
thirdMonth = (secondMonth +(monthlyRate * secondMonth)) - monthlyPayment;

printf("Balance remaining after first payment: $%.2f\n", firstMonth);
printf("Balance remaining after second payment: $%.2f\n", secondMonth);
printf("Balance remaining after third payment: $%.2f\n", thirdMonth);


return 0;
}