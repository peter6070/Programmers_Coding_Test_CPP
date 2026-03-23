#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    stringstream ss(polynomial);
    stringstream result;
    string word="";
    int constantTerm=0;
    int xTerm = 0;
    string xTermString = "";
    while(ss>>word){
        if(word == "+") continue;
        else if(word.find("x") != string::npos){
            if(word=="x") xTerm++;
            else {
                string numPart = word.substr(0, word.size() - 1); 
                xTerm += stoi(numPart);
            }
        }
        else constantTerm += stoi(word);
    }
    if(xTerm == 1) xTermString = "x";
    else xTermString = to_string(xTerm) + "x";
    
    if(xTerm != 0 ){
        if(constantTerm != 0) result << xTermString << " + " <<constantTerm;
        else result << xTermString;
    }
    else{
        if(constantTerm != 0) result <<constantTerm;
        else result<<0;
    }
    return result.str();
}