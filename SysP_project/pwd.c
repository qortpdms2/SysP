#include <stdio.h>
#include <unistd.h>

int main() {
	char path[1024];
	//getcwd()�� �����ϸ� 0�� ��ȯ�ϰ�, �����ϸ� -1�� ��ȯ��. ���нÿ��� perror()�� ���� �޽��� ���
	if (getcwd(path, sizeof(path)) != NULL) {
		printf("%s\n", path);
	}
	else {
		perror("error");
		return 1;
	}
	return 0;
}