#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) {
    int answer = 1;
    while(slice*answer - n < 0){
        answer++;
    }
        
    return answer;
}