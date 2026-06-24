#include<iostream>
using namespace std;

void EvenOrOdd(int num){
     if((num&1) == 0){
        cout << "the number is Even " << endl;
     }else{
        cout << "the number is Odd " << endl;
     }
}

int main(){
    EvenOrOdd(4);
    EvenOrOdd(7);

    return 0;
}