#include<stdio.h>

int main(void) {

    double initialPrice;
    double intrest;
    double intrestPeriod;
    double intrestDecreasing;
    double compoundPeriod;

    printf("Enter The Initial Price: ");
    scanf_s("%lf", &initialPrice);
    printf("Enter The Interest in Percentage: ");
    scanf_s("%lf", &intrest);
    printf("Enter the ORIGINAL Interest Compund Period in months: ");
    scanf_s("%lf", &intrestPeriod);
    printf("Enter Decreasing amount from the initial Price per month: ");
    scanf_s("%lf", &intrestDecreasing);
    printf("Enter Compound Period in months: ");
    scanf_s("%lf", &compoundPeriod);

    double value = 0;
    double decreasing = 0;
    double c = compoundPeriod;

    for (double i = c; i > 0; i--)
    {
        value += ((intrest * (initialPrice - decreasing)) / intrestPeriod);

        decreasing += intrestDecreasing;
    }

    printf("The Total Interest is: %lf", value);

}