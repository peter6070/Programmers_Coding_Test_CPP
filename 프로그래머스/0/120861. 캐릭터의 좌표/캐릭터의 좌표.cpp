#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer={0,0};
    int limitX = board[0]/2;
    int limitY=board[1]/2;
    for(string k : keyinput){
        if(k=="left"){
            if(answer[0] > -limitX) answer[0]--;
        }
        else if(k=="right"){
            if(answer[0] < limitX) answer[0]++;
        }
        else if(k=="up"){
            if(answer[1] < limitY) answer[1]++;
        }
        else if(k=="down"){
             if(answer[1] > -limitY) answer[1]--;
        }
    }
    return answer;
}