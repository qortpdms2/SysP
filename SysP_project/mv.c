#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        return 1;
    }

    const char* source = argv[1];
    const char* destination = argv[2];

    rename(source, destination);

    return 0;
}
