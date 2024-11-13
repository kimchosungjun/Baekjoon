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

    int count = 0;
    if (n == 1) {
        count = 10;
    }
    else if (n == 2) {
        count = 11;
    }
    else if (n >= 3) {
        int temp = 1;
        while (temp <= n) {
            if (temp * 2 <= n) {
                temp *= 2;
                count++;
            }
            else{
                count += 2;
                break;
            }
        }
        count += 8;
    }

    cout << count << '\n';
    return 0;
}