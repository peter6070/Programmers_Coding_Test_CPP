#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer=0;
    vector<vector<int>> copy = board;
    int n = copy.size();
    
    int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1}; // 행(Row)의 변화량
    int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1}; // 열(Column)의 변화량
    
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            if(board[r][c]==1){
                for(int i=0;i<8;i++){
                int nr = r+dr[i];
                int nc = c+dc[i];
                if(nr >= 0 && nr < n && nc >= 0 && nc < n){
                    copy[nr][nc] = 1;
                }    
            }
            }
            
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(copy[i][j]==0) answer++;
        }
    }
    
    
    return answer;
}