#include<stdio.h>
#include <stdlib.h>
int main()
{
    float inr;
    printf("Enter the amount in INR:");
    scanf("%f",&inr);
    float usd=inr*0.013;
    printf("\nEntered amount in US Dollars: %.2f",usd);
    float euro=inr*0.012;
    printf("\nEntered amount in Euros: %.2f",euro);
    float pound=inr*0.010;
    printf("\nEntered amount in British Pounds: %.2f",pound);
    float yen=inr*1.7100;
    printf("\nEntered amount in Japanese Yen: %.2f",yen);
    float yuan=inr*0.086;
    printf("\nEntered amount in Chinese Yuan: %.2f",yuan);

    return 0;
}