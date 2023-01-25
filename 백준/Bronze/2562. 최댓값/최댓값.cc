#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	
	int temp;
	int max=0;
	int count = 0;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &temp);
		if (max < temp) {
			max = temp;
			count = i + 1;
		}
	}
	
	printf("%d\n%d", max,count);
	return 0;
}
