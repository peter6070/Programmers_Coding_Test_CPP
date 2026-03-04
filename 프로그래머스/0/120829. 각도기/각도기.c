#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int angle) {
    if(0<angle<=180){
        return angle<90 ? 1 : angle==90 ? 2 : angle <180 ? 3 : 4;
    }
}