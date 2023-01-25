#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n, m, money;
    int left = 0, right = 0;
    vector<int>v;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> money;
        v.push_back(money);
        left = max(left,money);
        right += v[i];
    }

    int mid = 0;

    while (left <= right) {
        mid = (left + right) / 2;
        int count = 1;
        int now = mid;

        for (int i = 0; i < n; i++) {
            now = now - v[i];
            if (now <= 0) {
                now = mid - v[i];
                count++;
            }
        }

        if (count <= m) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    cout << mid;
    return 0;
}
