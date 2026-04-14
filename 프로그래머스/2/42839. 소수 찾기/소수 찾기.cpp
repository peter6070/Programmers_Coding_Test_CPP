#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>

using namespace std;

bool isPrime(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

bool next_permutation1(string &numbers){
    for(int i=numbers.size()-1;i>0;i--){
        if(numbers[i-1] < numbers[i]){
            auto target = numbers[i-1];
            for(int j=numbers.size()-1;j>0;j--){
                if(target < numbers[j]){
                    swap(numbers[i-1], numbers[j]);
                    break;
                }    
            }
            reverse(numbers.begin() + i, numbers.end());
            return true;
        }
    }
    reverse(numbers.begin(), numbers.end());
    return false;
}

int solution(string numbers) {
    int answer = 0;
    set<int> s;
    
    sort(numbers.begin(), numbers.end());
    //순열 만들기
    do {
        for (int i = 1; i <= numbers.size(); i++) {
            s.insert(stoi(numbers.substr(0, i)));
        }
    // } while (next_permutation(numbers.begin(), numbers.end()));
    } while (next_permutation1(numbers));
    
    //소수 판별별
    for (int e : s) {
        if(isPrime(e)) answer++;
    }
    
    return answer;
}