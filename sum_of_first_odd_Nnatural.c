/* WAP to calculate sum of first N odd natural numbers */

#include<stdio.h>
int main() {

    int i, n, sum = 0;

    printf("Enter a number : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += (i*2-1);
    }

    /*
        n *= 2;
        for(i = 1; i <= n; i+=2) {
            sum += i;
        }
    */
   printf("Sum of first odd N natural numbers is %d", sum);
   return 0;
}