#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6};
    int *atr = arr;
    int *atr1 = atr + 3;
    cout << atr << endl;
    cout << atr1 << endl; 
    cout << atr1 - atr << endl;

         // comparison
    cout << (atr==arr) << endl;
    cout << (atr1 > atr) << endl;
    cout << (atr1 < atr) << endl;

    int a = 12;
    int *ptr = &a;
    int *ptr1 = ptr + 3;
    cout << ptr << endl;
    cout << ptr1 << endl; 
    cout << ptr1 - ptr << endl;
    return 0;
}