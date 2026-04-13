#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int a[] = {1,2,3,4,5};
    int b[] = {2,1,2,3,2,4,2,5};
    int c[] = {3,3,1,1,2,2,4,4,5,5};
    int f=0,s=0,t=0;
    
    for(int i=0;i<answers.size();i++){
        if(answers[i] == a[i%5]) f++;
        if(answers[i] == b[i%8]) s++;
        if(answers[i] == c[i%10]) t++;
    }
    
    int maxScore = max({f, s, t});
    if (f == maxScore) answer.push_back(1);
    if (s == maxScore) answer.push_back(2);
    if (t == maxScore) answer.push_back(3);
        
    
    return answer;
}