/* WAP to reverse a given number */

#include<stdio.h>
int main() {

    int i, num;
    int temp = 0;

    printf("Enter a number : ");
    scanf("%d", &num);

    while(num) {
        temp = temp * 10 + num % 10;
        num /= 10;
    }

    printf("Reverse = %d", temp);
    return 0;
}