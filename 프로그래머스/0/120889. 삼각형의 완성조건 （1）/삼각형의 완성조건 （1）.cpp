#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> v) {
    int answer = 0;
    sort(v.begin(), v.end());
    answer = v[2] < v[0] + v[1] ? 1 : 2;
    return answer;

}