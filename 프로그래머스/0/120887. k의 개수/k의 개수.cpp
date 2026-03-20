#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    for(int n=i;n<=j;n++){
        int a = n;
        while(a>0){
            if(a%10==k) answer++;
            a/=10;
        }
    }
    return answer;
}