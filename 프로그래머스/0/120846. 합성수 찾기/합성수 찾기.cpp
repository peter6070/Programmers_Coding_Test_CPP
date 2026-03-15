#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for(int i=4; i<=n;i++){
        int count=0;
        for(int j=1;j<i;j++){
            if(count >= 2){
                answer++;
                break;
            }
            else if(i%j==0) count++;
        }
    }
    return answer;
}