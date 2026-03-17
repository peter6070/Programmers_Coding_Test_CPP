#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    for(auto& s : my_string){
        if(isupper(s))
            s = s +32;
        else
            s = s-32;
    }
    return my_string;
}