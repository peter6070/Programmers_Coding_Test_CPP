#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    for(int i=0;i<rsp.size();i++){
        answer += rsp[i] == '2' ? '0' : (rsp[i] == '0' ? '5' : '2');
    }
    return answer;
}