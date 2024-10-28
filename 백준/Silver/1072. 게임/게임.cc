#include <iostream>
#include<vector>
#define setting ios::sync_with_stdio(NULL), cin.tie(NULL)
using namespace std;

const int MAX = 1000000000;

int main()
{
    setting;
    long long X, Y;
    cin >> X >> Y;
    int Z = (Y * 100) / X;
    if (Z >= 99) {
        cout << -1 << "\n";
        return 0;
    }

    int low = 0, high = MAX;
    int result = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int tempZ = (100 * (Y + mid)) / (X + mid);
        if (Z >= tempZ)
        {
            result = mid + 1;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }

    cout << result << "\n";
    return 0;
}