#include <stdio.h>

int sum(int a, int b, int c) {
	return a + b + c;
}

int main() {
	int d, e, f;
	int s; 

	scanf_s("%d %d %d", &d, &e, &f);

	s = sum(d, e, f);
	printf("d e f�� ���� %d �Դϴ�.\n", s);

	return 0;
}