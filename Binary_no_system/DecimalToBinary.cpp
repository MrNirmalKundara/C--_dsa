#include<iostream>
using namespace std;

void DecToBin(int decnum){
    int n = decnum;
    int Binum = 0;
    int pow = 1;

    while(n>0){
        int rem = n%2;
        Binum += rem*pow;
        n = n/2;
        pow = pow*10;
    }

    cout << "the Decimal Number :" << n << "to Binary Number is :" << Binum ;
}
int main(){
    DecToBin(5);
    return 0;
}