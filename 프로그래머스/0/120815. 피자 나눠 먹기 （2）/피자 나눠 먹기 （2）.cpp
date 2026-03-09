#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int pizza = 1; // 피자 1판부터 시작!
    
    // (피자 판수 * 6조각) 을 사람 수 n 으로 나누었을 때 나머지가 0이 아니면 계속 반복
    while ((pizza * 6) % n != 0) {
        pizza++; // 한 판 더 시켜!
    }
    
    return pizza;
}