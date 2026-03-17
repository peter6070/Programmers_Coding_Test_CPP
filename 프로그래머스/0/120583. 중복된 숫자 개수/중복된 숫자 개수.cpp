#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    // for(int v : array)
    //     if(v==n) answer++;
    answer = count(array.begin(), array.end(), n); // n의 개수 반환
    return answer;
}