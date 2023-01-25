#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main(void) {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	int sum = A * B * C;
	int num;

	int arr[10]={0};

	while (true) {
		num=sum % 10;
		arr[num]+=1;
		sum /= 10;
		if (sum ==0) {
			break;
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
}