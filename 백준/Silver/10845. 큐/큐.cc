#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h>
#define MAX 10000

int arr[MAX];
int head=-1;
int rear=-1;

void push(int val) {
	rear++;
	arr[rear] = val;
}

void pop() {

	if (head == rear) {
		printf("-1\n");
	}
	else {
		head++;
		printf("%d\n", arr[head]);
	}
}

void size() {
	printf("%d\n", rear-head);
}

void empty() {
	if (head == rear) {
		printf("1\n");
	}
	else {
		printf("0\n");
	}
}

void front() {
	if (head== rear) {
		printf("-1\n");
	}
	else {
		printf("%d\n", arr[head+1]);
	}
}

void back() {
	if (head == rear) {
		printf("-1\n");
	}
	else {
		printf("%d\n", arr[rear]);
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
		else if (strcmp(ch, "front") == 0) {
			front();
		}
		else if (strcmp(ch, "back") == 0) {
			back();
		}
	}
}