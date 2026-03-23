#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    for(char &c : my_string){
        if(!isdigit(c)) c = ' ';
    }
    stringstream ss(my_string);
    int n=0;
    while(ss >> n){
        answer += n;
    }
    return answer;
}