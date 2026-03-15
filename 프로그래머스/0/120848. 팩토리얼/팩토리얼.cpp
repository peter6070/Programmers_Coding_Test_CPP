#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    long long answer = 1;
    for(int i=1;i<=n;i++){
        answer*=i;
        if(answer > n) return --i;
        else if(answer == n) return i;
        
    }
}