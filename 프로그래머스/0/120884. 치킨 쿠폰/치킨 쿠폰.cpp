#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = 0;
    int service = 0;
    int coupon = chicken;
    int coupon_remain = 0;
    
    while(coupon >= 10){
        service = coupon/10;
        coupon_remain = coupon % 10;
        answer += service;
         coupon = service + coupon_remain;
    }
    
   
    return answer;
}