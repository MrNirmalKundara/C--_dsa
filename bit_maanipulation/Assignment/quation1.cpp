#include<iostream>
using namespace std;

int ClearRange(int num,int i,int j){
    int a = (~0) << j+1;
    int b = (1<<i) - 1;

    int bitmask = a|b;

    return (bitmask&num);
}

int main(){
    cout << ClearRange(15,1,3);
    return 0;
}