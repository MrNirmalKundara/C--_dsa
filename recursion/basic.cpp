#include<iostream>
using namespace std;

      // recursion function :-- when a function repeatedly calls itself.
void function(){
    cout << "this func is calling itself.....\n";
    function();
}
int main(){
    function();
    return 0;
}