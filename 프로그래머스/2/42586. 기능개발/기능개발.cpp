#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    stack<int> s;
    vector<int> days;
    int complete=0;

    
    //현재 날짜 변수를 저장
    //현재 날짜보다 작거나 같은 애들은 바로 지우고 카운트++
    //현재 날짜보다 크면 0으로 만들고 카운트++
    int day=0;
    for(int i=0;i<progresses.size(); i++){
        if(speeds[i]==1){
            days.emplace_back(100-progresses[i]);
        }
        else{
             while(progresses[i] < 100){
                progresses[i] += speeds[i];
                 day++;
            }
            days.emplace_back(day);
            day=0;
        }
    }
    
    //스택에 쌓기(앞에 있는 요소가 위로 오도록)
    for(int i=days.size()-1; i>=0;i--){
        s.push(days[i]);
    }
    
   int currentDay = s.top();
    
    //스택이 빌 때까지 반복
    while(!s.empty()){
        //진행 완료된 것들은 answer에 개수 추가
        if(s.top() <= currentDay){
            complete++;
            s.pop(); //위에거 지우기
        }
        else{
            answer.emplace_back(complete);
            currentDay = s.top();
            //진행 완료 개수 초기화
            complete=0;
        }
    }
    answer.emplace_back(complete);
    
    
    return answer;
}