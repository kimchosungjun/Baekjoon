#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;

int color[3]={0,};
// color[0] = 흰 색의 수
// color[1] = 파란색의 수
int arr[129][129] = { 0, };
// arr[][]=1 : 파란색
// arr[][]=0 : 흰 색

void divide(int x, int y, int n) {
    int find=arr[x][y];
    int half_n = n / 2;
    bool check = true;
    if (n == 1) {
        color[arr[x][y]]++;
        return;
    }
    else {
        for (int i = x; i < x + n; i++) {
            for (int j = y; j < y + n; j++) {
                if (arr[i][j] != find) {
                    check = false;
                    break;
                }
            }
            if (check == false) {
                break;
            }
        }
    }
    if (check == false) {
        divide(x+ half_n, y, half_n);
        divide(x , y + half_n, half_n);
        divide(x, y, half_n);
        divide(x + half_n, y + half_n, half_n);
    }
    else {
        color[find]++;
    }
   
}

int main(int argc, const char* argv[]) {
    
    int n,num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> num;
            arr[i][j] = num;
        }
    }
    divide(0,0,n);
    cout << color[0] << endl << color[1];
    return 0;
 }