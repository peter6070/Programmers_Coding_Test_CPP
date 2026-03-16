#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    stringstream ss(s); //문자열 s를 sstream ss에 삽입
    string word;
    // string prevWord;
    int lastValue = 0; //직전 값 저장
    //문자열을 복사해서 저장하는 게 아닌 처음부터 int형으로 저장하여 메모리 절약
    while(ss >> word){ //ss에서 공백을 기준으로 문자를 하나씩 꺼내옴
        if(word == "Z") 
            // answer -= stoi(prevWord);
            // 이미 정수로 바꿨던 값만 빼기 ( stoi 중복 호출 X )
            answer -= lastValue;
        else{
            // answer += stoi(word);
            // prevWord = word;
            lastValue = stoi(word);
            answer += lastValue;
        }
    }
    
    return answer;
}