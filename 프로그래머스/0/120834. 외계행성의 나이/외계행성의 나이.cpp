#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int age) {
    string answer = "";
    string alpha = "abcdefghijklmnopqrstuvwxyz";
    if(age==0) return "a";
    while(age>0){
        int index = age%10; //일의 자리 추출
        answer += alpha[index];
        age/=10; //일의 자리 버리기
    }
    
    reverse(answer.begin(), answer.end());
    return answer;
}