#include <stdio.h>

// 숫자 하나를 입력받아 입력받은 숫자만큼의 직삼각형을 출력한다.
// n = 3
// ***
//  **
//   *

int main() {
	int n;
	scanf_s("%d", &n);
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < i; j++) {
			printf(" ");
		}
		for (j = 0; j < n - i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
