#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer="";
    for(int c=0;c<my_string.size();c++){
        for(int i=0;i<n;i++)
            answer+=my_string[c];
    }
    return answer;
}