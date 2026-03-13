#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

string solution(string letter) {
    string answer = "";
    stringstream ss(letter); //문자열을 stream에 하나씩 넣음
     map<string, string> morse = {
    {".-", "a"}, {"-...", "b"}, {"-.-.", "c"}, {"-..", "d"}, {".", "e"},
    {"..-.", "f"}, {"--.", "g"}, {"....", "h"}, {"..", "i"}, {".---", "j"},
    {"-.-", "k"}, {".-..", "l"}, {"--", "m"}, {"-.", "n"}, {"---", "o"},
    {".--.", "p"}, {"--.-", "q"}, {".-.", "r"}, {"...", "s"}, {"-", "t"},
    {"..-", "u"}, {"...-", "v"}, {".--", "w"}, {"-..-", "x"}, {"-.--", "y"},
    {"--..", "z"}
    };
//     int start_index = 0;
//     while(true){
//         int end_index = letter.find(' ', start_index); //start_index부터 시작해서 공백 찾기
        
//         if(end_index == string::npos) {//공백이 없으면(문장 끝났으면)
//             string last_word = letter.substr(start_index);
//             if(!last_word.empty()) //last_word가 비어있지 않으면
//                 answer+=morse[last_word]; //morse에서 last_word 키값의 value를 찾아 answer에 붙이기
//             break;
//         }
//         string word = letter.substr(start_index, end_index - start_index);
//         answer+=morse[word];
        
//         start_index = end_index+1; //시작 인덱스를 끝 인덱스+1 로 설정
//         //다음 공백을 찾기 위해
            
//     }
    
    string word;   
    while(ss>>word){
        answer+=morse[word];
    }
    
    
    return answer;
}