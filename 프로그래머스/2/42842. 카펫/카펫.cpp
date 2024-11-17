#include <string>
#include <vector>
#include <cmath>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int ex = (brown-4)/2;
    int less = (ex - sqrt(ex*ex-4*yellow)) /2;
    int more = (ex + sqrt(ex*ex-4*yellow)) /2;
    answer.push_back(more+2);
    answer.push_back(less+2);
    return answer;
}