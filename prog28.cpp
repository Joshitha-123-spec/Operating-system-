#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char filename[] = "sample.txt";
    char search[100], line[200];

    // Input the word to search
    printf("Enter word to search: ");
    scanf("%s", search);

    // Open the file
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    printf("Matching lines:\n");
    while (fgets(line, sizeof(line), fp)) {
        if (strstr(line, search)) {
            printf("%s", line);
        }
    }

    fclose(fp);
    return 0;
}

