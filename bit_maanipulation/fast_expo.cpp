#include<iostream>
using namespace std;

int fast_expo(int x,int n){
    int ans = 1;

    while(n>0){
        int lastDigit = n&1;
        if(lastDigit){  // if lastDigit == 1
            ans = ans*x;
        }
        x *= x;

        n = n >> 1;
    }
    return ans;
}

int main(){
   cout <<  fast_expo(3,5);
    return 0;
}