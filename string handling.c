#include <stdio.h>
#include <string.h>

int main() {
    char greeting[] = "Hello, World!";

    printf("Length of the string: %lu\n", strlen(greeting));
    printf("First five characters: %.5s\n", greeting);

    return 0;
}