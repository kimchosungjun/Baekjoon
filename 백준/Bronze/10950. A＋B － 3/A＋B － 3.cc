#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    int a, b;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        cout << a + b << '\n';
    }
    


    return 0;
}