#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int person;
	scanf("%d", &person);
	
	int count;
	int n_cute = 0;
	int y_cute = 0;

	for (int i = 0; i < person; i++) {
		scanf("%d", &count);
		if (count == 0) {
			n_cute++;
		}
		else if (count == 1) {
			y_cute++;
		}
	}
	if (n_cute > y_cute) {
		printf("Junhee is not cute!");
	}
	else if(n_cute < y_cute) {
		printf("Junhee is cute!");
	}
}
