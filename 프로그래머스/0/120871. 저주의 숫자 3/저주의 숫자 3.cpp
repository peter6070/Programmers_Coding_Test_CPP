#include <string>
#include <vector>

using namespace std;

bool hasThree(int n) {
    while (n > 0) {
        if (n % 10 == 3) return true;
        n /= 10;
    }
    return false;
}

int solution(int n) {
    int answer = 0;
    for(int i=1;i<=n;i++){
        answer++;
        while(answer%3==0||hasThree(answer)){
            answer++;
        }
    }    
    
    return answer;
}