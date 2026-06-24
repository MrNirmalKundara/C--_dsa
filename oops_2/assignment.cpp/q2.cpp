#include<iostream>
using namespace std;

class bank{
   int accountNum;
   float balance;

public:
   void deposit(){
    cout << "1000 money deposit...\n";
   }

   void withdraw(){
    cout <<"1000 money withdraw...\n";
   }

   bank(int accountNum,float balance){
      this->accountNum  = accountNum;
      this->balance = balance;
   }
   float getbalance(){
    return balance;
   }
};
int main(){
    bank b1(20243029,30);
    cout << b1.getbalance();
    return 0;
}