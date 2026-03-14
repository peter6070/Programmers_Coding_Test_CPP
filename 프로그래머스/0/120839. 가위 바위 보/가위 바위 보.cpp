#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    for(auto it: rsp){
        answer += it == '2' ? '0' : (it == '0' ? '5' : '2');
    }
    return answer;
}