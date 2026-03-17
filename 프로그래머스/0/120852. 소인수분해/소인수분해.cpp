#include <string>
#include <vector>

using namespace std;



vector<int> solution(int n) {
//     vector<int> answer;
//     int k = 2;
//     while(k<=n){
//         if(n%k==0){
//             n/=k;
//             if(n%k!=0) answer.push_back(k++);
//         }
//         else{
//             k++;
//         }
//     }
    
//     return answer;
    
    vector<int> answer;
    // n의 제곱근까지만 루프
    for (int k = 2; k * k <= n; k++) {
        if (n % k == 0) {
            answer.push_back(k);
            while (n % k == 0) n /= k; // k가 n에서 완전히 빠질 때까지 나눔
        }
    }
    // 루프가 끝났는데 n이 1보다 크다면 , 남은 n은 마지막 소인수
    if (n > 1) answer.push_back(n);
    
    return answer;

}