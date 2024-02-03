#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    printf("Enter a positive integer N: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("Sum of numbers from 1 to %d is %d\n", n, sum);

    return 0;
}