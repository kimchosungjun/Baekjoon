
#include <iostream>
using namespace std;

char board[3200][6300];
int N;

void input(int x, int y) {

	board[x][y] = '*';
	board[x + 1][y - 1] = '*';
	board[x + 1][y + 1] = '*';
	for (int i = 0; i < 5; i++) {
		board[x + 2][y - 2 + i] = '*';
	}
}
void print_star(int n, int x, int y) {

	if (n == 3) {
		input(x, y);
		return;
	}
	print_star(n / 2, x, y);
	print_star(n / 2, x + n / 2, y - n / 2);
	print_star(n / 2, x + n / 2, y + n / 2);
}

int main() {
	ios::sync_with_stdio(NULL);
	cin.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < 2 * N; j++)
			board[i][j] = ' ';
	print_star(N, 0, N - 1);
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2 * N - 1; j++) cout << board[i][j];
		cout << "\n";
	}
}
