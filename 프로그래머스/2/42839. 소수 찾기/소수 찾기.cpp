#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include<tuple>
#include<set>
#include <deque>
#include<string>
#include<cmath>
#include<set>
#include <cstring> // memset 사용

using namespace std;

string str;
int strSize = 0;
bool visited[8] = { 0, };
set<int>s;

void Case(int cur, int loc, string cs) {
    if (cur == loc) {
        int num = stoi(cs);
        s.insert(num);
        return;
    }

    for (int i = 0; i < strSize; i++) {
        if (visited[i] == true)
            continue;
        visited[i] = true;
        Case(cur + 1, loc, cs + str[i]);
        visited[i] = false;
    }
}

int PrimeNum(int num) {
    if(num<2)
        return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int solution(string numbers) {
    int answer = 0;
    str = numbers;
    strSize = numbers.size();
    
    for (int i = 1; i <= strSize; i++) {
        Case(0, i, "");
    }

    for (set<int>::iterator iter = s.begin(); iter != s.end(); iter++) {
        answer += PrimeNum(*iter);
    }

    return answer;
}