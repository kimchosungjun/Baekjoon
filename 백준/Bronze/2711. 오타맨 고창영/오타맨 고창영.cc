#include <string>
#include <iostream>
using namespace std;
#define MAX 1000
int main(int argc, char*argv[]) {
	
	int num;
	cin >> num;
	int pos;
	string word[MAX];
	for (int i = 0; i < num; i++) {
		cin >> pos;
		cin >> word[i];
		word[i].erase(pos - 1, 1);
	}
	for (int i = 0; i < num; i++) {
		cout << word[i] << endl;
	}
	
	return 0;
}
