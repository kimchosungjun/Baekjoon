#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		for (int j = i; j < num; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
