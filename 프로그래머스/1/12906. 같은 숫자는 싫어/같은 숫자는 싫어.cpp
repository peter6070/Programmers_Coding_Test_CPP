#include <vector>
#include <iostream>
#include <queue>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    queue<int> q;
    q.push(arr[0]);
    for(auto i : arr){
        if(q.back()!=i)
            q.push(i);
    }
    while(!q.empty()){
        answer.emplace_back(q.front());
        q.pop();
    }
    

    return answer;
}