#include<stdio.h>

int main() {
    int num, count = 0;

    printf("Enter any number: ");
    scanf("%d", &num);

    if (num == 0) {
        count = 1;
    } else {
        while (num != 0) {
            count++;
            num = num / 10;
        }
    }

    printf("Total number of digits: %d", count);

    return 0;
}