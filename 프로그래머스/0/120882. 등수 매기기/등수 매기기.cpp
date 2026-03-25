#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<int> avr;

    for(vector<int> i : score){
        avr.push_back((i[0]+i[1]));
    }
     vector<int> temp=avr;
    
    sort(temp.begin(), temp.end(), greater<int>()); //내림차순
    
    for(int x : avr){
        auto it = find(temp.begin(), temp.end(), x);
        answer.push_back(distance(temp.begin(), it)+1);
    }
    
    return answer;
}