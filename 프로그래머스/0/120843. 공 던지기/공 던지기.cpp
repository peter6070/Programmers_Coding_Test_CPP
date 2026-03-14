#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    // int seq = 0;
    // for(int i=0;i<k; i++){
    //     if(seq>=numbers.size())
    //         seq -= numbers.size();
    //     seq+=2;
    // }
    // return seq-1;
    return numbers[--k * 2 % numbers.size()];
}