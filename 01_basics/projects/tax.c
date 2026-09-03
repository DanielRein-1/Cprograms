#include <stdio.h>
int main(){
float tax, amount, amount_after_tax;

printf("Enter Amount in dollars and cents: ");
scanf("%f", &amount);

tax = 0.05;
amount_after_tax = amount + (tax * amount);

printf("With tax added: $%.2f", amount_after_tax);

    return 0;
}