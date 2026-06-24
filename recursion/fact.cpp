#include<iostream>
using namespace std;

// int fact(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*fact(n-1);
// }

int Number(int n){
    if(n>0){
    cout << n << " ";
    }
    return Number(n-1);
}
int main(){
    // cout << fact(3);

    Number(5);
    return 0;
}