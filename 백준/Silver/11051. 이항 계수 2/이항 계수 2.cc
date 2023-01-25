#include<iostream>
using namespace std;
int n, k;
long long set[1005][1005];

int main() {
    cin >> n >> k;
    set[0][0] = 1;
    set[1][0] = 1;
    set[1][1] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if (j == 0) set[i][0] = 1;
            else if (j == i) set[i][j] = 1;
            else set[i][j] = (set[i - 1][j - 1] + set[i - 1][j]) % 10007;
        }
    }
    cout << set[n][k];
    return 0;
}

