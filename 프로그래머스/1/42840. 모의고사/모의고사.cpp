#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int a1[5]={1,2,3,4,5};
int a2[8]={2,1,2,3,2,4,2,5};
int a3[10]={3,3,1,1,2,2,4,4,5,5};


vector<int> solution(vector<int> answers) {
    vector<int> answer(3);
    answer[0]=0;
    answer[1]=0;
    answer[2]=0;
    
    for(int i=0; i<answers.size(); i++){
        if(a1[i%5]==answers[i])
        {
            answer[0]+=1;
        }
         if(a2[i%8]==answers[i])
        {
            answer[1]+=1;
        }
         if(a3[i%10]==answers[i])
        {
            answer[2]+=1;
        }
    }
    
    int max=-1;
    
    for(int k=0; k<3; k++){
        if(max<answer[k])
            max=answer[k];
    }
    
    vector<int>res;
    
    for(int k=0; k<3; k++){
        if(max==answer[k])
            res.push_back(k+1);
    }
    
    sort(res.begin(),res.end());
    return res;
}