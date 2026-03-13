#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    while(hp>=0){
        if(hp<=0) return answer;
        else if(hp >= 5){
            answer++;
            hp-=5;
        }
        else if(hp>=3){
            answer++;
            hp-=3;
        }
        else{
            answer++;
            hp--;
        }
            
    }
    
    
    return answer;
}