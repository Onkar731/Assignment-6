/* WAP to calculate factorial of a number */

#include<stdio.h>
int main() {

    int i, num, fact = 1;

    printf("Enter a number : ");
    scanf("%d", &num);

    // factorial is the product of 1 to N OR N to 1
    for(i = 1; i <= num; i++) {
        fact *= i;
    }

    printf("Factorial = %d", fact);
    return 0;
}