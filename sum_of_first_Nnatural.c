/* WAP to calculate sum of first N natural numbers */

#include<stdio.h>
int main() {

    int i, n, sum = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum is %d", sum);
    return 0;
}