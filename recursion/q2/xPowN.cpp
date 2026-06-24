#include<iostream>
#include<cmath>
using namespace std;

// int power(int x,int n){
//     return pow(x,n);
// }
 
     //or ( time complexity...O(n) )
// int power(int x,int n){
//     if(n==0){
//         return 1;
//     }
//     return x*power(x,n-1);
// }

    
int power(int x,int n){
    if(n==0){
        return 1;
    }
    int halfpow = power(x,n/2);
    int halfPowSqr = halfpow*halfpow;

    if(n%2 != 0){
        return x*halfPowSqr;
    }
    return halfPowSqr;
}
int main(){
    cout << power(3,4);
    return 0;
}