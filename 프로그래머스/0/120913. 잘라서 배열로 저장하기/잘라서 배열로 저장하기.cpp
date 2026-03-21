#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;

    for(int i=0;i<my_str.size();i+=n){
        string str = "";
        for(int j=i;j<i+n;j++){
            if(my_str.size() <= j) break;
            else str += my_str[j];
        }
        answer.push_back(str);
    }
    
    
    return answer;
}