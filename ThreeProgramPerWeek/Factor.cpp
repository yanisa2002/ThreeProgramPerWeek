#include <stdio.h>

int main() {
    int num, x = 2;
    printf("Enter Number : ");
    scanf_s("%d", &num);
    if (num < 2)printf("The number is less than 1");
    else {
        printf("Factoring Result : ");
        while (num != 1) {
            while (num % x == 0) {
                printf("%d", x);
                num = num / x;
                if (num == 1) break;
                printf(" x ");
            }
            x++;
        }
    }

}