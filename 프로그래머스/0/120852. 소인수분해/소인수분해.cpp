#include <string>
#include <vector>

using namespace std;



vector<int> solution(int n) {
    vector<int> answer;
    int k = 2;
    while(k<=n){
        if(n%k==0){
            n/=k;
            if(n%k!=0) answer.push_back(k++);
        }
        else{
            k++;
        }
    }
    
    return answer;
}