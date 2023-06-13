#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char* str) {
    int s = 0;
    int e = strlen(str) - 1;

    while (s < e) {
        char temp = str[s];
        str[s] = str[e];
        str[e] = temp;

        s++;
        e--;
    }
}

int main(int argc, char* argv[]) {
    if (argc == 1) {
        char line[100];

        while (fgets(line, sizeof(line), stdin) != NULL) {
            reverse(line);
            printf("%s\n", line);
        }
    } else if (argc == 2) {
        FILE* file = fopen(argv[1], "r");
        if (file == NULL) {
            return 1;
        }

        char line[100];

        while (fgets(line, sizeof(line), file) != NULL) {
            reverse(line);
            printf("%s", line);
        }

        fclose(file);
    } 

    return 0;
}
