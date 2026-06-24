#include<iostream>
using namespace std;
 

      // passing argument through the value
// void changeA(int a){
//       a = 67;
//       cout << a << endl;
//  }

         // passing argument through the pointer.
    // void changeA(int *ptr){
    //     *ptr = 89;
    //     cout << *ptr << endl;   
    // }

         // passing argument through the reference variable.
    void changeA(int &para){
        para = 14;
        cout << para << endl;
    }
int main(){
    int a = 18;
        // for argu. through value
    // changeA(a);
    // cout << a << endl;

        // through the pointer
    // changeA(&a);
    // cout << a << endl;

            // referenecing concept
    // int b = 12;
    // int &c = b;
    // cout << b << "," << c << endl;

    // b = 34;
    // cout << b << "," << c << endl;

    int x = 13;
    changeA(x);
    cout << x << endl;
    return 0;
}