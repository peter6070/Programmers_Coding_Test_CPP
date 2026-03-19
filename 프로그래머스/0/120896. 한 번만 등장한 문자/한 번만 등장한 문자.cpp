#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

string solution(string s) {
    string answer = "";
    map<char, int> m;
    for(auto v: s) m[v]++;
    for(auto v:m){
        if(v.second <= 1) answer+=v.first;
    }
    
    return answer;
}