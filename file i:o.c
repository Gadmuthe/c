#include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    // Writing to a file
    file = fopen("example.txt", "w");
    fprintf(file, "Hello, File I/O!");
    fclose(file);

    // Reading from a file
    file = fopen("example.txt", "r");
    fgets(data, sizeof(data), file);
    fclose(file);

    printf("Data read from file: %s\n", data);

    return 0;
}