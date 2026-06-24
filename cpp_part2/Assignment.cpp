#include<iostream>
using namespace std;
int main(){
          // Q1
    // int num;
    // cout << "enter the number :" <<endl;
    // cin >> num;

    // if(num > 0){
    //     cout << "Positive" <<endl;
    // }else if(num < 0){
    //     cout << "Negative" <<endl;
    // }
    // else{
    //     cout << "Zero" <<endl;
    // }


          // Q5
    int a;
    cout <<"Enter three digit number :" <<endl;
    cin >> a;

    int b = a;

    int digi1 = b%10;
    b /= 10;

    int digi2 = b%10;
    b /= 10;
    
    int digi3 = b;

    int cubesum = (digi1*digi1*digi1) + (digi2*digi2*digi2) + (digi3*digi3*digi3);
    if (cubesum == a) {
         cout << a << "Armstrong Number :" << endl;
    } else{
        cout << "it is not Armstrong Number :" << endl;
    }

    return 0;
}




