#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

void range(int A, int B, int C) {
	if (A > B) {
		if (A > C) {
			if (B > C) {
				printf("%d %d %d", C, B, A);
			}
			else {
				printf("%d %d %d", B, C, A);
			}
		}
		else {
			printf("%d %d %d", B, A, C);
		}
	}
	else {
		if (B > C) {
			if (A > C) {
				printf("%d %d %d", C, A, B);
			}
			else {
				printf("%d %d %d", A, C, B);
			}
		}
		else {
			printf("%d %d %d", A, B, C);
		}
	}

}

int main() {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	range(A, B, C);
	return 0;
}
