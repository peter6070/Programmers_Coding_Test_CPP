#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    //AB-CD
    int dx1 = dots[1][0] - dots[0][0];
    int dy1 = dots[1][1] - dots[0][1];
    int dx2 = dots[3][0] - dots[2][0];
    int dy2 = dots[3][1] - dots[2][1];

    
    if(dy1 * dx2 == dy2 * dx1) answer=1;
    else{
        //AC-BD
        dx1 = dots[2][0] - dots[0][0];
        dy1 = dots[2][1] - dots[0][1];
        dx2 = dots[3][0] - dots[1][0];
        dy2 = dots[3][1] - dots[1][1];
        if(dy1 * dx2 == dy2 * dx1) answer=1;
        else{
            //AD-BC
            dx1 = dots[3][0] - dots[0][0];
            dy1 = dots[3][1] - dots[0][1];
            dx2 = dots[2][0] - dots[1][0];
            dy2 = dots[2][1] - dots[1][1];
            if(dy1 * dx2 == dy2 * dx1) answer=1;
            else return 0;
        }
    }
    
    return answer;
}