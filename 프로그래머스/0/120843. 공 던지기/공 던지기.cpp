#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int seq = 0;
    for(int i=0;i<k; i++){
        if(seq>=numbers.size())
            seq -= numbers.size();
        seq+=2;
    }
    return seq-1;
}