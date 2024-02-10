#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    printf("Elements of the array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}