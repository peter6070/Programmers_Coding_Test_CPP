#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    priority_queue<int, vector<int>, greater<int>> pq; //작은 순서대로
    int answer = 0;

    for(auto s: scoville) pq.push(s);
    
    while(pq.top() < K){
        if(pq.size()<=1) return -1;
        else{
            int temp = pq.top();
            pq.pop();
            pq.push(temp + (pq.top()*2));
            pq.pop();
            answer++;    
        }
    }
    
    return answer;
}