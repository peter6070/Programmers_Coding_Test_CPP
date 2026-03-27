#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string A, string B) {
    if(A==B) return 0;
    for(int i=1;i<B.length();i++){
        rotate(B.begin(), B.begin()+1, B.end());
        if(A==B){
            return i;
        }
    }
    return -1;  
}