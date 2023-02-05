#include<iostream>
#include<string>
using namespace std;
string s;
int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(0);
    cin >> s;
    int start = 0;
    int range = min(3, (int)s.length());
    for (int i = 0; i < range; i++) {
        start = start * 10 + s[i] - '0';
        string add;
        for (int j = start;; j++) {
            add += to_string(j);
            if (add == s) {
                cout << start << " " << j;
                return 0;
            }
            if (add.size() > s.size())
                break;
        }
    }
    return 0;
}