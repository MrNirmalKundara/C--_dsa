#include<iostream>
using namespace std;


          
                   // for scope is two type :-- 1) local scope  2). global scope
// int sum(int a,int b){
//     int sum = a+b;
//     return sum;
// }

// int sum;   // global scope

// int sum(int a,int b=2){
//     int sum = a+b;  // local scope
//     return sum;
// }


                     // function overloading
int sum(int a,int b){
    int sum = a+b;
    return sum;
}

double sum(double a,double b){
     int sum = a+b;
     return sum;
}

int sum(int a,int b,int c){
    int sum = a+b+c;
    return sum;
}

int main(){
    // int s = sum(2); 
    cout << sum(2,3) << endl;
    cout << sum(2.5,3.5) << endl;
    cout << sum(1,2,3); 
    
    return 0;
}