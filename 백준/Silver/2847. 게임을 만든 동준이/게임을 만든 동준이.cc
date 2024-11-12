#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include<tuple>
#include<set>
#include <deque>
#include<cmath>
#include <cstring> // memset 사용
#define Max 100001
typedef long long int  llt;
#define setting ios::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

int main() {
    setting;
    int n;
    cin >> n;

    int arr[101] = { 0, };

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int res = 0;
    int diff = 0;

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i + 1] > arr[i])
            continue;

        diff = (arr[i]+1) - arr[i + 1];
        res += diff;
        arr[i] = arr[i] - diff;
    }

    cout << res;
    return 0;
}