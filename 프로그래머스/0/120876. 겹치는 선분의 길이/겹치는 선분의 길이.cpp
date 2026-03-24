#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    vector<int> arr(201, 0);
    for(vector<int> l : lines){
        for(int i=l[0]; i<l[1];i++){
            arr[i+100] += 1;
        }
    }
    answer = count_if(arr.begin(), arr.end(), [](int n){
        return n>=2;
    });
    
    return answer;
}