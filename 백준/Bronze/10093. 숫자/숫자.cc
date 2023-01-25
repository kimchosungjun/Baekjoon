#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	long long A, B;
	scanf("%d %d", &A, &B);
	int count;

	if (A > B) {
		count = A - B - 1;
		printf("%d\n", count);
		for (int i = B+1; i < A; i++) {
			printf("%d ", i);
		}
	}
	else if(A<B) {
		count = B - A - 1;
		printf("%d\n", count);
		for (int i = A+1; i < B; i++) {
			printf("%d ", i);
		}
	}
	else {
		printf("0");
	}
	return 0;
}
