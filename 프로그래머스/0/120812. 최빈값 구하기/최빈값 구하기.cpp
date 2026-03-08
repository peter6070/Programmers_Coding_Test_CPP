#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    int count = 0;
    int tempCount = 0;
    
    if(array.size()==1)
        return array[0];
    
    sort(array.begin(), array.end());
    
    for(int i=0;i<array.size(); i++){
        if(array[i] == array[i+1])
            tempCount++;
        else{
            if(tempCount > count){
                count = tempCount;
                answer = array[i];
            } 
            else if(tempCount == count)
                answer = -1;
            tempCount = 0;
        }
        
    }
        
    return answer;
}