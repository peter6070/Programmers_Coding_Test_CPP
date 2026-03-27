#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int mid=total/num;
    
    for(int i=-(num-1)/2;i<num;i++){
        answer.emplace_back(mid+i);
        if(answer.size()==num) break;
    }
    
    return answer;
}