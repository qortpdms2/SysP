#include <stdio.h>
#include <time.h>

int main() {
    time_t currentTime;
    struct tm *localTime;
    char timeString[80];

    currentTime = time(NULL);
    localTime = localtime(&currentTime);

    strftime(timeString, sizeof(timeString), "%a %b %d %H:%M:%S %Z %Y", localTime);
    printf("%s\n", timeString);

    return 0;
}
