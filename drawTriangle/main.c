#include <stdio.h>

// ���� �ϳ��� �Է¹޾� �Է¹��� ���ڸ�ŭ�� ���ﰢ���� ����Ѵ�.
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
