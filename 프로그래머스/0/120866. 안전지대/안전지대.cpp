#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer=0;
    int n = board.size();
    // vector<vector<int>> copy[n][n]={0};
    
    
    int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1}; // 행(Row)의 변화량
    int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1}; // 열(Column)의 변화량
    
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            if(board[r][c]==1){ //1은 지뢰매설지역
                for(int i=0;i<8;i++){
                int nr = r+dr[i];
                int nc = c+dc[i];
                if(nr >= 0 && nr < n && nc >= 0 && nc < n && board[nr][nc]==0){
                    board[nr][nc] = 2; //위험지역은 2로 표시
                }    
            }
            }
            
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==0) answer++;
        }
    }
    
    
    return answer;
}