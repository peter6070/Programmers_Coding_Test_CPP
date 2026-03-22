#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer=0;
//     int maxX = dots[0][0], minX = dots[0][0];
//     int maxY = dots[0][1], minY = dots[0][1];
    
//     for(int i = 1; i < dots.size(); i++) { // 0번은 이미 넣었으니 1번부터 돌아도 됩니다.
//         // maxX 찾기
//         if(dots[i][0] > maxX) maxX = dots[i][0];
//         // minX 찾기 (else if 보다는 각각 독립적으로 체크하는 게 더 안전합니다!)
//         if(dots[i][0] < minX) minX = dots[i][0];
        
//         // maxY 찾기
//         if(dots[i][1] > maxY) maxY = dots[i][1];
//         // minY 찾기
//         if(dots[i][1] < minY) minY = dots[i][1];
//     }
    

    int maxX = max({dots[0][0],dots[1][0],dots[2][0],dots[3][0]});
    int minX = min({dots[0][0],dots[1][0],dots[2][0],dots[3][0]});
    int maxY = max({dots[0][1],dots[1][1],dots[2][1],dots[3][1]});
    int minY = min({dots[0][1],dots[1][1],dots[2][1],dots[3][1]});
    
    answer = (maxX - minX) * (maxY-minY);
    
    return answer;
}