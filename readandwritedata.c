#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("File cannot be opened");
        return 0;
    }

    printf("Enter text to write into file:\n");
    fgets(text, sizeof(text), stdin);
    fprintf(fp, "%s", text);
    fclose(fp);

    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("File cannot be opened");
        return 0;
    }

    printf("\nData read from file:\n");
    while (fgets(text, sizeof(text), fp) != NULL) {
        printf("%s", text);
    }

    fclose(fp);
    return 0;
}