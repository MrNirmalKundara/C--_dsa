#include<iostream>
using namespace std;

      // abtract class 
class shape{
   public:
     virtual void draw() = 0;  // pure virtual function
};

class circle : public shape{
   public:
     void draw(){
        cout <<"that is circle...\n";
     } 
};

class square : public shape{
   public:
     void draw(){
        cout << "that is square...\n";
     }  
};
int main(){
    circle cir1;
    cir1.draw();

    square sqr1;
    sqr1.draw();

  // shape s1;

    return 0;
}