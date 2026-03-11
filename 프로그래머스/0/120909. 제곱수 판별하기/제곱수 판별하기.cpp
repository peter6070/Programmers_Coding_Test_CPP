#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int s = sqrt(n);
    return s*s==n ? 1 : 2;
}