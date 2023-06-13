#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>

int main() {
    uid_t uid = getuid();
    struct passwd *pw = getpwuid(uid);
    
    printf("%s\n", pw->pw_name);

    return 0;
}
