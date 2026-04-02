#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    // queue<int> q;
    // q.push(arr[0]);
    // for(auto i : arr){
    //     if(q.back()!=i)
    //         q.push(i);
    // }
    // while(!q.empty()){
    //     answer.emplace_back(q.front());
    //     q.pop();
    // }
    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    return arr;
}