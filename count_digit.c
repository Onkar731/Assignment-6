/* WAP to count digits in a given number */

#include<stdio.h>
int main() {

    int i, num, count = 0;

    printf("Enter a number : ");
    scanf("%d", &num);

    // count has the count of digits
    do {
        count++;
        num /= 10;
    }while(num);

    printf("Total number of digits are %d", count);
    return 0;
}