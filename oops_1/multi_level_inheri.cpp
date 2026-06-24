#include<iostream>
using namespace std;

class animal{
    public:
       void eat(){
        cout << "eating..." << endl;
       }
       void breaths(){
        cout << "breathing...." << endl;
       }
};

class mammal : public animal{
    public:
      string bloodType;
      mammal(){
        bloodType = "warm";
      }
};

class dog : public mammal{
    public:
     void tailwag(){
        cout << "a dog wags its tail..." << endl;
     }
};

int main(){
    dog d1;
    d1.eat();
    d1.breaths();
    d1.tailwag();

    return 0;
}