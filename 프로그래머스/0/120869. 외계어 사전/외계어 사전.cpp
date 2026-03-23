#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 0;
    int count=0;
    for(auto s : dic){
        count=0;
        for(auto w : spell){
            if(s.find(w)!=string::npos) count++;
        }
        if(count >= spell.size()) return 1;
        else answer = 2;
    }
    
    return answer;
}