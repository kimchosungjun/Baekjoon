#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int count = 0;
    int p[5000];
    p[0] = 1;
    p[1] = -1;
    p[2] = -1;
    p[3] = 1;
    p[4] = -1;
    p[5] = 1;
    p[6] = 1;
    p[7] = -1;
    p[8] = 1;
    p[9] = 1;
    p[10] = 1;
    int n;
    cin >> n;
    for (int i = 11; i <= n; i++) {
        if (p[i - 3] == 1 || p[i - 5] == 1) {
            p[i] = 1;
        }
        else {
            p[i] = -1;
        }
    }

    if (p[n] == -1) {
        cout << -1;
    }
    else {
        if (p[n - 5] == 1&&p[n-3]!=1) {
            cout << n / 5;
        }
        else if (p[n - 5] != 1 && p[n - 3] == 1) {
            cout << n / 3;
        }
        else {
            while (n>=1) {
                if (p[n - 5] == 1) {
                    n = n - 5;
                    count++;
                }
                else {
                    if (p[n - 3] == 1) {
                        n = n - 3;
                        count++;
                    }
                }
            }
            cout << count;
        }
    }
    return 0;
}
