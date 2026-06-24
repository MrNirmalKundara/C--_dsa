#include<iostream>
using namespace std;

int main(){

    // Q1 :--
    // int a = 6, b = 9;
    // if(a>b){
    //     cout<<"a is bigest number :" << endl;
    // }

    // else{
    //     cout << "b is bigest number :" << endl;
    // }

    // Q2 :--
    // int n;
    // cout << "Enter a Number :" << endl;
    // cin >> n;

    // if(n%2 == 0){
    //     cout <<"So the Number is Even :" << n << endl;
    // }
    // else{
    //     cout <<"the Number is Odd :" << n <<endl;
    // }

    // Q3 :--
    // int income;
    // cout << "Enter your Income(In Lakh) :" ;
    // cin >> income;
    // float tax;

    // if(income < 5){
    //     tax = 0;
    // }else if(income <= 10 && income <= 15){
    //   tax = 0.2 * income;
    // }else{
    //      tax = 0.3*income;
    // }

    // cout << "tax : " << (tax*100000) <<endl;


              // write a program create a calculator
    int a;
    cout << "Enter the First Number :"; 
    cin >> a;
    cout << endl;
    int b;
    cout << "Enter the second Number :";
    cin >> b;
    cout << endl;

    char operation;
    cout << "Enter operation sign :";
    cin >> operation;
    cout << endl;

    if(operation == '+'){
        int sum = a + b;
        cout << "Sum :" <<sum << endl;
    }else if(operation == '-'){
         int diff = a - b;
         cout << "the Difference is :" << diff << endl;
    } else if(operation == '*'){
        int multiply = a*b;
        cout << "Multiply is :" << multiply << endl;
    } else if (operation == '/'){
        int divide = a/b;
        cout << "Divide is :" << divide << endl;
    } else{
        cout << "Invalid Sign" <<endl;
    }




    return 0;
}