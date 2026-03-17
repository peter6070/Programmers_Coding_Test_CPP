#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    for(auto& s : my_string){
        if('A'<= s && s <= 'Z')
            s = s +32;
        else if('a' <= s && s<='z')
            s = s-32;
    }
    return my_string;
}