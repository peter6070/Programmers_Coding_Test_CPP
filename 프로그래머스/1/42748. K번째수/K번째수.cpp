#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
//     vector<int> answer;
    
//     for(auto c : commands){
//        vector<int> copy;
//         for(int i=c[0]-1; i<c[1];i++){
//             copy.emplace_back(array[i]);
//         }
//         sort(copy.begin(), copy.end());
//         answer.emplace_back(copy[c[2]-1]);
//     }
    vector<int> answer;
    vector<int> temp;
    
    for(int i=0;i<commands.size();i++){
        temp=array;
        sort(temp.begin() + commands[i][0] -1, temp.begin() + commands[i][1]);
        answer.emplace_back(temp[commands[i][0] + commands[i][2]-2]);
    }
    
    return answer;
}