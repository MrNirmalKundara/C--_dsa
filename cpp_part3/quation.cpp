#include<iostream>
#include<cmath>
using namespace std;


int main(){
    
               // Q1
    // for(int i=1;i<=4;i++){
    //     cout <<"****"<<endl;
    // }

             // Q2
    // int n;
    // cout << "Enter the Number :" ;
    // cin >> n;
    // for(int i=n;i>0;i--){
    //     cout << i <<endl;
    // }

             // Q3 -- Sum of digit of a number
    // int m;
    // cout <<"Enter the Number :" ;
    // cin >> m;
    
    // int lastdigit;
    // int sumDigit = 0;
    // while (m>0){
    //    lastdigit = m%10;
    //    cout << lastdigit;
    //    sumDigit += lastdigit;
    //    m = m/10;
    // }
    // cout << "\n";
    // cout << "All of the all digit :" << sumDigit << endl;


             // Q4 -- sum of digit of odd number
    // int m;
    // cout <<"Enter the Number :" ;
    // cin >> m;
    
    // int lastdigit;
    // int sumDigit = 0;
    //     while(m>0){
    //         lastdigit = m%10;
    //         cout << lastdigit;
    //           if(lastdigit%2 != 0){
    //                sumDigit += lastdigit;
    //             }
    //             m = m/10;
    // }

    //     cout << "sum = " << sumDigit << endl;




     // q5 -- wap where user can keep entering numbers till they enter a multiple of 10.
    
    // int mult;
    // do{
    //     cout << "enter the values" ;
    //     cin >> mult;
    //     if(mult%10 == 0){
    //         break;
    //     }
    //     cout << "entered value" <<endl;
    // } while(true);
    

     // Q6 -- wap to show number entered by user except multiple of 10.
     
    // int exe;
    // do{
    //     cout << "enter the number " ;
    //     cin >> exe;
    //     if(exe % 10 == 0){
    //         continue;
    //     }
    //     cout << "you entered the value of :" << exe << endl;
    // } while(true);

    // Q7 -- wap to show number is prime number or not
                 
          // method = 1
    // int n= 12;
    // bool isPrime = true;

    // for(int x=2; x<=n-1; x++){
    //     if(n%x == 0){
    //         isPrime = false;
    //         break;
    //     }
    // }

    // if(isPrime == true){
    //     cout <<"the number is prime number :" << endl;
    // }
    // else{
    //     cout << "the number is not prime number :" << endl;
    // }
       
              // method :- 2
    int m = 13;
    bool isPrime = true;
    for(int i=2;i<=sqrt(m);i++){
        if(m%i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout << "the number is prime" << endl;
    }else{
        cout << "the number is non prime :" << endl;
    }
    return 0;
}