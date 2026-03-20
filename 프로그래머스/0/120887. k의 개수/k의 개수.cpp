#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    for(int n=i;n<=j;n++){
        for(int m=n;m>0;m/=10)
            if(m%10==k) answer++;
    }
    return answer;
}