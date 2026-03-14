#include <string>
#include <vector>

using namespace std;

long long solution(int balls, int share) {
    long long answer =1;
    
    if(balls / 2 < share) share = balls - share;
    for(int i=1; i <= share;i++){
        answer *= (balls -i +1); //분자 곱하기
        answer /= i; //분모 나누기
    }
    
    return answer;
}