#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    int n = numbers.size();
    
    int maxPos = numbers[n-1] * numbers[n-2]; //뒤에서 1,2번째 값 곱하기(최댓값 2개)
    
    int maxNeg = numbers[0] * numbers[1]; //앞에서 1,2번째 값 곱하기(최솟값 2개)
    
    return maxPos > maxNeg ? maxPos : maxNeg;
}