#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {2,1,2,3,2,4,2,5};
    vector<int> c = {3,3,1,1,2,2,4,4,5,5};
    //맞춘 개수 배열
     vector<int> result(3);
    
    for(int i=0;i<answers.size();i++){
        if(answers[i] == a[i%a.size()]) result[0]++;
        if(answers[i] == b[i%b.size()]) result[1]++;
        if(answers[i] == c[i%c.size()]) result[2]++;
    }
    
    int maxScore = *max_element(result.begin(), result.end());
    for(int i=0;i<result.size();i++){
        if(result[i] == maxScore) answer.emplace_back(i+1);
    }
        
    return answer;
}