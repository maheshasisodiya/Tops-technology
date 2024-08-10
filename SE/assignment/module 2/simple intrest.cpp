#include<stdio.h>

int main()
{
float loan;
float interest;
int n;
float outstanding;
float outstanding2;
float princeable;
float payment;


printf("\nEnter the amount of the loan: \n ");
scanf("%f" , &loan);
printf("\nEnter monthly interest percentage\n ");
scanf("%f" , &interest);
printf("\nEnter monthly payments: \n ");
scanf("%f" , &payment);
printf("\nEnter number of monthly Payments: \n ");
scanf("%i" , &n);


while (n >= 0) {
    outstanding = (loan - payment);
    outstanding = (outstanding * (1 + (interest/100)));


    printf("\Outstanding Balance after %i =%.2f\n\n", n, outstanding);
    n--;
}

return 0;

}
