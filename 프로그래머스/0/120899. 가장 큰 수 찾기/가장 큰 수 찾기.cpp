#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    //최댓값
    int max = *max_element(array.begin(), array.end());
    answer.push_back(max);
    //최댓값 인덱스
    int index = find(array.begin(), array.end(),max) - array.begin();
    answer.push_back(index);
    
    return answer;
}