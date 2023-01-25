#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long p[1000];
    p[1] = 1;
    p[2] = 1;
    p[3] = 1;
    p[4] = 2;
    p[5] = 2;
    p[6] = 3;
        
    int n, t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        for (int i = 7; i <= n; i++) {
            p[i] = p[i - 5] + p[i - 1];
        }
        cout << p[n] << '\n';
    }
    return 0;
}
