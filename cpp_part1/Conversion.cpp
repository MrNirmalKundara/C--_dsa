#include<iostream>
using namespace std;

int main(){
        // Constant -- variable that cannot be changed.
        float pi1 = 3.15;  // not const that mean value changed.
        const float pi = 3.14;  // const that mean value changed.

        // pi1 = 3.16;
        // cout << "after chnaged the value :" << pi1 << endl;

        // pi = 3.20;
        // cout << "after chnaged the value :" << pi << endl;


                 // Typecasting -- conversion of data from one type to another type
                        // implicit type Conversion :- Automatic conversion the data from one type to another type
        // cout << (10/3) << endl;
        // cout << (10/3.0) << endl;
        // cout << (10.0/3) << endl;
        
        // cout << 'a' +2 << endl;
        // cout << 'A' - 1.5 << endl ;

        // bool isAdult = false;
        // cout << 'A' + isAdult << endl;
    

                        //  explicit type Conversion :- not automatocally change the data type
        float pi3 = 3.14;
        cout << (int)pi3 << endl;
        cout << (char)('A' - 6) << endl;
        cout << 23.5+2+'A' << endl;

    return 0;
}