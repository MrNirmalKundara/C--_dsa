#include<iostream>
#include<string>
using namespace std;

class A{
    string secret = "secret data...";

      // for friend class
    friend class B;

      // for friend function
    friend void revealSecret(A &obj);
};

      // friend class B of class A
class B{
    public:
      void showSecret(A &obj){
           cout << obj.secret << endl;
      }
};

   // friend object
void revealSecret(A &obj){
    cout << obj.secret <<endl; 
}
int main(){
    A a1;
    B b1;
    b1.showSecret(a1);

    revealSecret(a1);
    return 0;
}