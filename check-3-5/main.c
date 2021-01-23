#include <stdio.h>

// 숫자를 입력 받아서 3의 배수 또는 5의 배수면 t 아니면 f

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