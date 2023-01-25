#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

void range(int A, int B, int C) {
	if (A > B) {
		if (A > C) {
			if (B > C) {
				printf("%d", B);
			}
			else {
				printf( "%d", C);
			}
		}
		else {
			printf("%d", A);
		}
	}
	else {
		if (B > C) {
			if (A > C) {
				printf("%d",A);
			}
			else {
				printf("%d",C);
			}
		}
		else {
			printf("%d", B);
		}
	}

}

int main() {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	range(A, B, C);
	return 0;
}
