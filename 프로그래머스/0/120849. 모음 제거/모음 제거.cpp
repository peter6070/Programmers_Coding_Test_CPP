#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string vowel = "aeiou";
    for(auto v:vowel){
        my_string.erase(remove(my_string.begin(),my_string.end(), v),my_string.end());
    }
    return my_string;
}