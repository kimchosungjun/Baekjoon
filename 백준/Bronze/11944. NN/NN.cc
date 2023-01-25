#define _CRT_SECURE_NO_WARNINGS 
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main() {
	string s = "";
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		s += to_string(n); //to_string : 숫자를 문자로 바꿔준다.
	}

	if (s.length() > m) { // string 사용한 경우 길이는 strlen(s)가 아니라 s.length() 사용
		cout << s.substr(0, m); // substr(pos,count) : pos부터 pos+count-1까지 반환
	}
	else {
		cout << s;
	}
	return 0;
}