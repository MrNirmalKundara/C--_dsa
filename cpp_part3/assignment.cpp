#include<iostream>
using namespace std;

int main(){
          //  Q1 :   
    int n;
    cout << "enter the number :" <<endl;
    cin >> n;
    
    cout << "the factorial is  :" << n << endl;
    for(int i=n;i>=1;i--){
        cout << i;
    }

          // Q2 :
    // int m;
    // cout << "enter the number :" << endl;
    // cin >> m;

    // for(int i=1;i<=10;i++){
    //     cout << m << " X " << i << " is : " << m*i << endl; 
    // }
    return 0;
}