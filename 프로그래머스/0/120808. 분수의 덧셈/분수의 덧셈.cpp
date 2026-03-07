#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    answer.push_back(numer1 * denom2 + numer2 * denom1); //answer[0]: 분자
    answer.push_back(denom1 * denom2); //answer[1]: 분모
    int i=1;
    for(int n=2;n<=answer[1];n++){ //2부터 분모까지 1씩 더해가며
        if(answer[0]%n==0 && answer[1]%n==0){ //분자, 분모를 n으로 나눴을 때 나누어 떨어지는가
            i=n;
        }
    }
    answer[0] /= i; //n으로 나눈 값을 분자에 저장
    answer[1] /= i; //n으로 나눈 값을 분모에 저장
    return answer;
}