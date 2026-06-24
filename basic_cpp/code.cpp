#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout << "hello World\n";
      
        //  data types  
    int a1 =12;
    cout << a1 << endl;
    
    char num = 'A';
    cout << num << endl;

    bool isAdult = true;
    cout << isAdult << endl;
    
    float PI = 3.1423423424543;
    double PI1 = 3.14345678967834561234;
    cout << setprecision(14) << "PI = " <<PI << endl;
    cout << setprecision(13) << "PI1 = " << PI1 << endl;

            // inputs in c++
    int a,b;
    cout << "Enter A Number :";
    cin >> a;

    cout << "Enter B Number :";
    cin >> b;

    int sum = a+b;
    cout << "sum is Equal to : " << sum <<endl;
    return 0;
}