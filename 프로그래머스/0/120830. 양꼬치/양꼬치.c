#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    if(0<n<1000){
        answer = n * 12000 + k * 2000 - (n/10)*2000;
    }
        
    return answer;
}