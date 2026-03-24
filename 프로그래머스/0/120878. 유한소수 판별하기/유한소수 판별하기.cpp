#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int a, int b) {
    int result = __gcd(a,b);
    int n = b/result;
    while (n > 1) {
        if (n % 5 == 0) n /= 5;
        else if (n % 2 == 0) n /= 2;
        else return 2; // 2나 5가 아닌 다른 소인수가 발견되면 즉시 탈출
    }
    
    return 1;
}