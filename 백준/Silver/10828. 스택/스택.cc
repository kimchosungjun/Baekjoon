#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h>
#define MAX 10000

int arr[MAX];
int count=-1;



void push(int val) {
	count++;
	arr[count] = val;
}

void pop() {

	if (count == -1) {
		printf("-1\n");
	}
	else {
		printf("%d\n", arr[count--]);
	}
}

void size() {
	printf("%d\n", count+1);
}

void empty() {
	if (count ==-1) {
		printf("1\n");
	}
	else {
		printf("0\n");
	}
}

void top() {
	if (count == -1) {
		printf("-1\n");
	}
	else {
		printf("%d\n", arr[count]);
	}
}

int main(void) {
	int val;
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		char ch[10];
		scanf("%s", ch);
		if (strcmp(ch, "push") == 0) {
			scanf("%d", &val);
			push(val);
		}
		else if (strcmp(ch, "pop") == 0) {
			pop();
		}
		else if (strcmp(ch, "size") == 0) {
			size();
		}
		else if (strcmp(ch, "empty") == 0) {
			empty();
		}
		else if (strcmp(ch, "top") == 0) {
			top();
		}
	}
}