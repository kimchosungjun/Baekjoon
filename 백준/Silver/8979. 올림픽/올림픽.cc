#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
using namespace std;

int main(int argc, const char* argv[]) {
    int n, k,num;
    int rank = 1;
    int gold[1001];
    int silver[1001];
    int bronze[1001];
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> num;
        cin >> gold[num] >> silver[num] >> bronze[num];
    }
    for (int i = 1; i <= n; i++) {
        if (gold[i] > gold[k]) {
            rank++;
        }
        else if(gold[i] == gold[k]) {
            if (silver[i] > silver[k]) {
                rank++;
            }
            else if(silver[i] == silver[k]) {
                if (bronze[i] > bronze[k]) {
                    rank++;
                }
            }
        }
    }
    cout << rank;
    return 0;
 }