#include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    // Write to file
    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error: Cannot open file for writing.\n");
    }

    printf("Enter data to write to file: ");
    fgets(data, 100, stdin);
    fputs(data, file);
    fclose(file);

    // Read from file
    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Error: Cannot open file for reading.\n");
    }

    printf("\nReading from file:\n");
    while (fgets(data, 100, file)) {
        printf("%s", data);
    }

    fclose(file);
    return 0;
}