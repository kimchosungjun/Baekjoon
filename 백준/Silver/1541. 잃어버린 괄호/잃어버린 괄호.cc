#include <iostream>
#include <string>
using namespace std;

int main() {
	string ex;                  
	bool check = false;
	string number = "";         
	int min_answer = 0;          
	cin >> ex;
	for (int i = 0; i <= ex.size(); i++) {
		if (ex[i] == '-' || ex[i] == '+' || i == ex.size()) {  
			if (check == true) {    
				min_answer -= stoi(number);    
				number = "";                    

			}
			else if (check == false) {
				min_answer += stoi(number);
				number = "";

			}
		}
		else {
			number += ex[i];
		}
		if (ex[i] == '-') {      
			check = true;
		}

	}
	cout << min_answer;
	return 0;
}