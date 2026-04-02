#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    int result = 1;
    unordered_map<string, int> list;
    for(auto i : clothes){
        list[i[1]]++; 
    }
    for(auto m : list){
        answer *= m.second + 1;
    }
    
    return answer-1;
}