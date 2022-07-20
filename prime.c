/* WAP to check whether a given number is a Prime Number or Not */

#include<stdio.h>
int main() {

    int i, num;

    printf("Enter a number : ");
    scanf("%d", &num);

    // prime number ==> A number which is divisible by 1 and itself
    //                  and has only two factors.
    for(i = 2; i < num; i++) {
        if(num % i == 0) {
            printf("Not a Prime Number");
            break;
        }
    }

    if(i == num) {
        printf("Prime Number");
    }
    return 0;
}