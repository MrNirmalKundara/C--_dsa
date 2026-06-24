#include<iostream>
using namespace std;


         // Q2 wap to check if a number is odd or even
// void num(int a){
//     if(a%2 == 0){
//         cout << "the Number is Even ";
//     }
//     else{
//         cout << "the Number is odd ";
//     }
// }

        // Q3 :-- wap to print the factorial of a number n.
    // int factorial(int c){
    //       int fact = 1;
    //       for(int i=1;i<=c;i++){
    //           fact = fact * i;
    //       }
    //       cout << "factorial of " << c << " is :" << fact <<endl;
    //       return fact;
    // }

     
        // Q4 :-- WAF to print if a number is prime or not.
    // bool prime(int d){
    //     if(d == 1){
    //         return false;
    //     }
    //     for(int i=2;i<=d-1;i++){
    //           if((d%i == 0))
    //           return false;
    //     }

    //     return true;
    // }

        // Q5 :- wap to print all prime no. from 2 to n.
    bool isPrime(int n){
        if(n == 1){
            return false;
        }

        for(int i=2;i*i<=n;i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }

    void allPrime(int n){
        for(int i=2;i<=n;i++){
            if(isPrime(i)){
                cout << i << " ";
            }
        }
    }
     
int main(){
    // num(8);
    // factorial(4);

    // cout << prime(13);

    allPrime(15);
    return 0;
}