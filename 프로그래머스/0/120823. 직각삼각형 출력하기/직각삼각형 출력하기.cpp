#include <iostream>

using namespace std;

int main(void) {
    int n;
    int count=1;
    cin >> n;
    for(int a=0;a<n;a++){
        for(int i=1;i<=count;i++){
            cout<<"*";
        }  
        if(n>count)
            count++;
        cout<<endl;
    }
    
    return 0;
}