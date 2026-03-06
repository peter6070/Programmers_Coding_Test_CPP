#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    answer = n%7 ==0 ? n/7 : n/7+1;
    return answer;
}