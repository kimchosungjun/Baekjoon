#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main() {
	int sum_arr[1001]={0,};
	int arr[1001];
	int sum = 0, total=0;
	int count,num,temp;
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		scanf("%d", &arr[i]);
	}
	// sort함수 없이, 정렬하는 방법
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < count; i++) {
		sum += arr[i];
		sum_arr[i] = sum;
		total += sum_arr[i];
	}
	printf("%d", total);
	return 0;
}