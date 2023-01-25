#include<iostream>
using namespace std;

int main(int argc, char* argv[]) {
	//윤년이면 1 아니면 0
	//윤년 조건 : 4의배수, 400의 배수, 100의배수는 아님
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int year;
	cin >> year;
	if (year % 4 == 0) {
		if(year%100==0 && year % 400 != 0) {
			cout << 0;
		}
		else if(year % 400 == 0) {
			cout << 1;
		}
		else {
			cout << 1;
		}
	}
	else {
		cout << 0;
	}
	return 0;
}


