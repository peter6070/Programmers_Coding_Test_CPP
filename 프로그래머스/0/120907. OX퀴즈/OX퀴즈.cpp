#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    vector<string> temp;
    string t="";
    for(auto v:quiz){
        stringstream ss(v);
        while(ss>>t){
            temp.push_back(t);
        }
        if(temp[1] == "+"){
            answer.push_back(stoi(temp[0])+stoi(temp[2])==stoi(temp[4]) ? "O":"X");
        }
        else if(temp[1] == "-"){
            answer.push_back(stoi(temp[0])-stoi(temp[2])==stoi(temp[4])? "O":"X");
        }
        temp.clear();
    }
    return answer;
}