#include<iostream>
using namespace std;

             // Binary Number to Decimal Number
int BintoDec(int Binum){
    int n = Binum;
    int decnum = 0;
    int pow = 1;

    while(n>0){
        int lastDigit = n%10;
        decnum += lastDigit*pow;
        pow = pow*2;
        n = n/10;
    }
 
    return decnum;   
}
int main(){
    cout << "Binary number to decimal number :" << BintoDec(101) <<endl;
    return 0;
}