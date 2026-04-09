#include <vector>

using namespace std;

// 전역 변수 없이 , 하위 노드들에서 찾은 정답 개수를 합산해서 반환합니다 .
int dfs(int index, int sum, const vector<int>& numbers, int target) {
    // 탈출 조건
    if (index == numbers.size()) {
        return (sum == target) ? 1 : 0;
    }

    // 왼쪽 ( 더하기 ) 에서 찾은 개수 + 오른쪽 ( 빼기 ) 에서 찾은 개수
    return dfs(index + 1, sum + numbers[index], numbers, target) 
         + dfs(index + 1, sum - numbers[index], numbers, target);
}

int solution(vector<int> numbers, int target) {
    return dfs(0, 0, numbers, target);
}