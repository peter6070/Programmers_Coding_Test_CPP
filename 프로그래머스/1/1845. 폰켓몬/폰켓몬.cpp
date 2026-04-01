#include <vector>
#include <map>
#include <cmath>
using namespace std;

int solution(vector<int> nums)
{
    map<int,int> list;
    for(auto i : nums) list[i]++;

    
    return min(list.size(), nums.size()/2);
}