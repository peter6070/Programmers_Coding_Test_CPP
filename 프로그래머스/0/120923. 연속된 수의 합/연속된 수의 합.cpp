#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
//     int mid=total/num;
    
//     for(int i=-(num-1)/2;i<num;i++){
//         answer.emplace_back(mid+i);
//         if(answer.size()==num) break;
//     }
    int sum = (total - (num * (num-1) / 2)) / num;
    //num * (num-1) / 2 -> 덤으로 가져갈 수(첫번째 숫자에서 num까지 1씩 증가했을 때 그 합)
    //전체(total)에서 덤을 뺀 값을 원래 인원 수(num)만큼 나누기
    
    for(int i=0;i<num;i++){
        answer.emplace_back(sum+i);
    }
    
    return answer;
}