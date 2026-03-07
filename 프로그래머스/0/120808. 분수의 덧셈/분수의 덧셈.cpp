#include <string>
#include <vector>
#include <numeric>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    int child = numer1 * denom2 + numer2 * denom1;
    int parent = denom1 * denom2;
    
    // 한 줄로 최대공약수 구하기
    int common = std::gcd(child, parent); 
    
    return {child / common, parent / common};
}