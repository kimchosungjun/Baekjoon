#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<string>
#include<cstring>
#include<cctype>
#define Max 251
using namespace std;

int main() {
	char arr[Max];
	int count = 0;
	while (true) {

		scanf("%[^\n]s", arr);
		getchar();
		if (arr[0] == '#') {
			return 0;
		}

		for (int i = 65; i <= 90; i++) {
			for (int j = 0; j < strlen(arr); j++) {
				if (toupper(arr[j]) == i) {
					count++;
					break;
				}
			}
		}
		printf("%d\n", count);
		count = 0;
	}
	
	return 0;
}