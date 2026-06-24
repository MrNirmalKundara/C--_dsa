#include<iostream>
using namespace std;

int main(){
    int a = 12;
    int *ptr = &a;
    int **pptr = &ptr;

    cout << &a << " = " << ptr <<endl;
    cout << pptr << endl;
   
       // dereference Operator
    cout << ptr << endl;
    cout << *(&a) << " = " << *ptr << endl;
    *ptr = 23;  // updation through the pointer 
    cout << a << endl;

           // Null pointer
    int *ptr1 = NULL;
    cout << ptr1 << endl;
    // cout << *ptr1 << endl;


    return 0;
}