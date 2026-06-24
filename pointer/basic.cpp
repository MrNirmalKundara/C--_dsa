#include<iostream>
using namespace std;

int main(){
    int a = 19;
    int *ptr = &a;
    int **pptr = &ptr;
    cout << &a <<"="<< ptr <<endl;
    cout << "size of a :" << sizeof(a) <<" = " << "size of pointer :" << sizeof(ptr) << endl;
    cout << &ptr << " = " << pptr << endl;

    int pi = 3.14;
    int *ptr1 = &pi;
    cout << &pi << "=" << ptr1 << endl;


    return 0;
}