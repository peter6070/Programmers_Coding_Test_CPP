#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            answer.push_back(i); //0으로 나눠떨어지는 값 넣기
            if(i != n/i)
                answer.push_back(n/i); //i로 나눴을 떄 0이 나오면 나눈 값도 약수
        }
    }
    sort(answer.begin(), answer.end());
    
    return answer;
}