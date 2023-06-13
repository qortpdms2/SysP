#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        return 1;
    }

    const char *command = argv[1];
    char *path_env = getenv("PATH");

    if (path_env == NULL) {
        return 1;
    }

    char *path = strtok(path_env, ":");

    while (path != NULL) {
        char command_path[256];
        snprintf(command_path, sizeof(command_path), "%s/%s", path, command);

        if (access(command_path, F_OK) == 0) {
            printf("%s\n", command_path);
            return 0;
        }
        path = strtok(NULL, ":");
    }
    return 1;
}
