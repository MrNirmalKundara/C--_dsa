#include<iostream>
using namespace std;

class parent{
    public:
     void show(){
        cout << "parent class show...\n";
     }

     virtual void hello(){
        cout <<"parents hello..\n";
     }
};

class child : public parent{
    public:
    void show(){
        cout << "parent class show...\n";
    }

    void hello(){
        cout <<"child hello...\n";
    }
};

int main(){
    child child1;
    parent *ptr;
    ptr = &child1;
    ptr->hello();

    return 0;
}