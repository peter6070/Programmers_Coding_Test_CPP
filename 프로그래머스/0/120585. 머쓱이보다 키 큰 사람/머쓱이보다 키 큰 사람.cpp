#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    for(const auto v : array){
        answer += (v > height);
    }
    return answer;
}