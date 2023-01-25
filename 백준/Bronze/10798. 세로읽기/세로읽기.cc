#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

int main(int argc, char* argv[]) {
	
	char arr[5][16]={' '};
	for (int i = 0; i < 5; i++) {
		scanf("%s", arr[i]);
	}
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[j][i] == '\0') {
				continue;
			}
			printf("%c", arr[j][i]);
		}
	}
}