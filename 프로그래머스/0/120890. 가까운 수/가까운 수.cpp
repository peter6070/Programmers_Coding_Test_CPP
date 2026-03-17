#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = array[0];
    int distance = abs(n-array[0]);
    for(auto i:array){
        if(abs(n-i) < distance){
            answer = i;
            distance = abs(n-i);
        }
        else if(abs(n-i)== distance && i < answer)
            answer = i;
    }
    
    return answer;
}