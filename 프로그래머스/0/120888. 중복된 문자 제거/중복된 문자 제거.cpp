#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(const auto s : my_string){
        if(answer.find(s) ==string::npos)
            answer+=s;
    }
    return answer;
}