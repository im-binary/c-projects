#include <stdio.h>

// ���ڸ� �Է� �޾Ƽ� 3�� ��� �Ǵ� 5�� ����� t �ƴϸ� f

int main() {
	int a;
	scanf_s("%d", &a);

	if ( a % 3 == 0 ) {
		printf("true\n");
	} else if ( a % 5 == 0 ) {
		printf("true\n");
	} else {
		printf("false\n");
	}
}