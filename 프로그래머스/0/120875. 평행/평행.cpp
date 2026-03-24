#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
//     int answer = 0;
//     //AB-CD
//     int dx1 = dots[1][0] - dots[0][0];
//     int dy1 = dots[1][1] - dots[0][1];
//     int dx2 = dots[3][0] - dots[2][0];
//     int dy2 = dots[3][1] - dots[2][1];

    
//     if(dy1 * dx2 == dy2 * dx1) answer=1;
//     else{
//         //AC-BD
//         dx1 = dots[2][0] - dots[0][0];
//         dy1 = dots[2][1] - dots[0][1];
//         dx2 = dots[3][0] - dots[1][0];
//         dy2 = dots[3][1] - dots[1][1];
//         if(dy1 * dx2 == dy2 * dx1) answer=1;
//         else{
//             //AD-BC
//             dx1 = dots[3][0] - dots[0][0];
//             dy1 = dots[3][1] - dots[0][1];
//             dx2 = dots[2][0] - dots[1][0];
//             dy2 = dots[2][1] - dots[1][1];
//             if(dy1 * dx2 == dy2 * dx1) answer=1;
//             else return 0;
//         }
//     }
    vector<vector<int>> pair={
        {0,1,2,3},
        {0,2,1,3},
        {0,3,1,2}
    };
    
    for(vector<int> xy : pair){
        //dy1(a-b) * dx2(c-d)
        int mul1 = (dots[xy[1]][1] - dots[xy[0]][1]) * (dots[xy[3]][0] - dots[xy[2]][0]);
        //dy2(a-b) * dx1(c-d)
        int mul2 = (dots[xy[1]][0] - dots[xy[0]][0]) * (dots[xy[3]][1] - dots[xy[2]][1]);
        if(mul1==mul2) return 1;
    }
    return 0;
}