#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> pron = {
        "aya","ye","woo","ma"
    };
    
    for(auto& s : babbling){
        for(string p : pron){
            while(s.find(p)!=string::npos){
                s.replace(s.find(p), p.length(), " ");
            }
        }
        bool isempty=true;
        for(char c : s){
            if(c != ' ') {
                isempty=false;
                break;
            }
        }
        if(isempty) answer++;
    }
    
    return answer;
}