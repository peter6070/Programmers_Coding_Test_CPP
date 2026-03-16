#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    stringstream ss(s); //문자열 s를 sstream ss에 삽입
    string word;
    string prevWord;
    while(ss >> word){ //ss에서 공백을 기준으로 문자를 하나씩 꺼내옴
        if(word == "Z") answer -= stoi(prevWord);
        else{
            answer += stoi(word);
            prevWord = word;
        }
    }
    
    return answer;
}