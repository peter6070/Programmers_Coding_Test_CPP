#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int w=0,h=0;
    for(auto s : sizes){
        // if(s[0] > s[1]) {
        //     int temp = s[0];
        //     s[0] = s[1];
        //     s[1] = temp;
        // }
        // if(s[0] > w) w = s[0];
        // if(s[1] > h) h = s[1];
        w=max(w,min(s[0],s[1]));
        h=max(h, max(s[0],s[1]));
    }
    
    return w*h;
}