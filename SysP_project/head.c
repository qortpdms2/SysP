#include <stdio.h>

void head(FILE *file, int numLines) {
    int lineCount = 0;
    char buffer[1024];

    while (lineCount < numLines && fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
        lineCount++;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    head(file, 10); // 처음 10개의 행을 출력합니다.

    fclose(file);

    return 0;
}
