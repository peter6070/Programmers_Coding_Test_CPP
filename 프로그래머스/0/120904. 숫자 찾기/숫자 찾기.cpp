#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    string strNum = to_string(num);
    auto findK = strNum.find(to_string(k));
    if(findK != string::npos){
        answer = findK+1;
    }
    else answer = -1;
    return answer;
}