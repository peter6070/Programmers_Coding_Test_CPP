#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 4; i <= n; i++) {
        // 2부터 루트 i까지만 확인해도 충분
        //약수가 1, 자신 뺴고 하나 더 있으면 합성수기 떄문에 더 계산할 필요 X
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                answer++;
                break; // 하나라도 나눠떨어지면 break(약수가 또 있다는 뜻)
            }
        }
    }
    return answer;
}