#include <stdio.h>
#include <unistd.h>

int main() {
	char path[1024];
	//getcwd()는 성공하면 0을 반환하고, 실패하면 -1을 반환함. 실패시에는 perror()로 오류 메시지 출력
	if (getcwd(path, sizeof(path)) != NULL) {
		printf("%s\n", path);
	}
	else {
		perror("error");
		return 1;
	}
	return 0;
}