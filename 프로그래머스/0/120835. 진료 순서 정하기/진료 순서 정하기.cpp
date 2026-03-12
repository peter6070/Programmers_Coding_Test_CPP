#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<int> emergency) {
//     vector<int> answer(emergency.size(),0);
//     vector<int> copy = emergency;
//     sort(copy.begin(), copy.end(), greater<int>());
//     for(int i=0;i<emergency.size();i++){
//         auto index = find(copy.begin(), copy.end(),emergency[i]);
//         answer[i] = (index-copy.begin())+1;
//     }
    auto m = map<int,int>(); //맵 m 선언
    for(auto& e : emergency){m[e];}
    auto order = m.size();
    for(auto& e:m){e.second = order--;}
    for (auto& e : emergency) { e = m[e]; }
    
    return emergency;
}