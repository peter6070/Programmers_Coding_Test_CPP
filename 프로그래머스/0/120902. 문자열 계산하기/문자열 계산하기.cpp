#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    stringstream ss(s);
    int a,b;
    char op;
    ss >> a;
    while(ss >> op >> b){
        if(op=='+') a +=b;
        else if(op=='-') a -= b;
    }
    
    
    return a;
}