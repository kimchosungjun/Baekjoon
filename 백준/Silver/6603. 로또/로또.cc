#include<iostream>

using namespace std;

int arr[15];
int ans[15];
bool visited[15];
int k;

int maxi;

void go(int loc) {
	if (loc == 6) {
		maxi = -1;
		for (int i = 0; i < 6; i++) {
			if (maxi < ans[i])
				maxi = ans[i];
			else
				return;
		}
		for (int i = 0; i < 6; i++) {
			cout << ans[i] << ' ';
		}
		cout << '\n';
	}
	else {
		for (int i = 0; i < k; i++) {
			if (!visited[i]) {
				visited[i] = true;
				ans[loc] = arr[i];
				go(loc + 1);
				visited[i] = false;
				ans[loc] = 0;
			}
		}
	}


}

int main() {

	while (true) {
		cin >> k;
		if (k == 0)
			break;
		for (int i = 0; i < k; i++) {
			cin >> arr[i];
		}
		go(0);
		cout << endl;
	}
	

	return 0;
}