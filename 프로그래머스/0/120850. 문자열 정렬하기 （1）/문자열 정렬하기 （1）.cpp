#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for(auto v : my_string){
        if('0' <= v && v <= '9') //아스키코드로 0~9 사이에 있는지 확인
            answer.push_back(v-'0');
        //'문자 - 숫자로 된 문자'를 계산하면 아스키코드로 변환되어 숫자로 들어감(빼기연산)
    }
    sort(answer.begin(), answer.end()); //오름차순 정렬
    return answer;
}