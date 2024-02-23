#include <stdio.h>

void square(int *num);

int main() {
    int number = 5;

    square(&number);

    printf("Squared value: %d\n", number);

    return 0;
}

void square(int *num) {
    *num = (*num) * (*num);
}