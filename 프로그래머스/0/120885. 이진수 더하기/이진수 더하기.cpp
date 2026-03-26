#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string bin1, string bin2) {
    //자릿수 맞추기
    if(bin1.length() < bin2.length()){
       bin1 = string(bin2.size() - bin1.size(), '0') + bin1;
    }
    else{
       bin2 = string(bin1.size() - bin2.size(), '0') + bin2;
    }
    
    string answer = "";
    int carry=0;
    
    for(int i=bin1.size()-1; i>=0;i--){
        int result = (bin1[i]-'0') + (bin2[i]-'0') + carry;
        answer += to_string(result%2);
        carry = result / 2;
    }
    
    if(carry!=0) answer+=to_string(carry);
    reverse(answer.begin(), answer.end());
    
    return answer;
}