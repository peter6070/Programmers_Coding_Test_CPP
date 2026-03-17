#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for(auto v : my_string){
        if('0' <= v && v<='9')
            answer += (v-'0');
    }
    return answer;
}