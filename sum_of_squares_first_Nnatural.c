/* WAP to calculate sum of squares of first N natural numbers */

#include<stdio.h>
int main() {

    int i, n, sum = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += i*i;
    }

    printf("Sum of squares of first N natural numbers is %d", sum);
    return 0;
}