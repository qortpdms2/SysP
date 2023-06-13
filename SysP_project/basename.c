#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* basename(const char *path) {
    const char *lastSlash = strrchr(path, '/');
    if (lastSlash == NULL) {
        return strdup(path);
    } else {
        return strdup(lastSlash + 1);
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <filepath>\n", argv[0]);
        return 1;
    }

    char *filename = basename(argv[1]);
    printf("%s\n", filename);

    return 0;
}
