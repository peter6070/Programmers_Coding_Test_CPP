#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

string solution(string s) {
    string answer = "";
    map<char, int> m;
    for(auto v: s) m[v]++;
    for(auto [c,n]:m){
        if(n<=1) answer+=c;
    }
    
    return answer;
}