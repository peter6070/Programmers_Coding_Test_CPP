#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer(emergency.size(),0);
    vector<int> copy = emergency;
    sort(copy.begin(), copy.end(), greater<int>());
    for(int i=0;i<emergency.size();i++){
        auto index = find(copy.begin(), copy.end(),emergency[i]);
        answer[i] = (index-copy.begin())+1;
    }
    
    
    return answer;
}