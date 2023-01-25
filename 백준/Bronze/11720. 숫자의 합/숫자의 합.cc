#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int count;
	scanf("%d", &count);
	
	int sum = 0;
	int num;
	for (int i = 0; i < count; i++) {
		scanf("%1d", &num);
		sum += num;
	}
	printf("%d", sum);

	return 0;
}
