/* WAP to calculate LCM of two numbers */

#include<stdio.h>
int main() {

    int num1, num2, lcm;

    printf("Enter two numbers : ");
    scanf("%d%d", &num1, &num2);

    for(lcm = (num1<num2? num1: num2); lcm <= num1*num2; lcm++){
        if(lcm % num1 == 0 && lcm % num2 == 0){
            printf("LCM = %d", lcm);
            break;
        }
    }

    return 0;
}