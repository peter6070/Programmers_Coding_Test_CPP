#include <vector>
#include <map>
#include <cmath>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    map<int,int> list;
    for(auto i : nums) list[i]++;
    
    if(list.size() > nums.size()/2) answer = nums.size()/2;
    else answer = list.size();
    
    return answer;
}