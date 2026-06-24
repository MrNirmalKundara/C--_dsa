#include<iostream>
using namespace std;

int clearLastBits(int num,int i){
    int bitmask = ~0 << i;
    return (bitmask&num);
}
int main(){
    cout << clearLastBits(15,2);
    return 0;
}