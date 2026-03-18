#include <string>
#include <vector>
#include <map>

using namespace std;

long long solution(string numbers) {
    string answer="";
    string current ="";
    map<string, int> alpha = { //map 초기화
        {"zero",0},
        {"one",1},
        {"two",2},
        {"three",3},
        {"four",4},
        {"five",5},
        {"six",6},
        {"seven",7},
        {"eight",8},
        {"nine",9}
    };
    for(auto c : numbers){
        current += c;
        auto it = alpha.find(current); 
        //current 문자열을 alpha맵에서 찾기(못찾으면 it=alpha.end()가 됨)
        if (it != alpha.end()) { // 끝까지 가기 전에 찾았다면?
            answer += to_string(it->second); 
            // 찾은 위치에서 바로 값을 꺼냄 (한 번만 뒤짐)
            current="";
        } 
    }
    return stoll(answer);
}