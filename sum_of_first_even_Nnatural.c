/* WAP to calculate sum of first N even natural numbers */

#include<stdio.h>
int main() {

    int i, n, sum = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += i*2;
    }

    /*
        n *= 2;
        for(i = 2; i <= n; i+=2) {
            sum += i;
        }
    */
    printf("\nSum of first even natural numbers is %d", sum);
    return 0;
}