#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    for(auto v:numbers)
        answer.push_back(v*2);
    return answer;
}