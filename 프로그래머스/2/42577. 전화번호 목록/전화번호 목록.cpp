#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
//     sort(phone_book.begin(), phone_book.end());
//     for(int i=0;i<phone_book.size()-1;i++){
//         if(phone_book[i+1].find(phone_book[i]) == 0) return false;
        
//     }
    unordered_set<string> us(phone_book.begin(), phone_book.end());
    for(auto i:phone_book){
        for(int j=1;j<i.size();j++){
            if(us.count(i.substr(0,j))) return false;
        }
        
    }
    return answer;
}