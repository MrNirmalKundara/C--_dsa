#include<iostream>
using namespace std;

// int getithBit(int num,int i){
//     int bitmask = 1 << i;
//     if(!(num&bitmask)){
//         cout << "ith bit is : ";
//         return 0;
//     }else{
//         cout << "ith bit is : ";
//         return 1;
//     }
// }

// int setithBit(int num,int i){
//     int bitmask = 1<<i;
//     return (bitmask|num);
// }

// int clearithBit(int num,int i){
//     int bitmask = ~(1<<i);
//     return (bitmask&num);
// }

bool checkPowerOf2(int num){
    if(!(num & (num-1))){
        cout << "the number is power of 2 " ;
        return true;
    }
    else{
        return false;
    }
}

int main(){
    // cout << getithBit(6,2);
    // cout << setithBit(6,3);
    //cout << clearithBit(6,2);

    cout << checkPowerOf2(4) << endl;
     cout << checkPowerOf2(16) << endl;
      cout << checkPowerOf2(5) << endl;
    return 0;
}