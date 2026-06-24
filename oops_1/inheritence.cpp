#include<iostream>
using namespace std;

class animal{
    public:
      string color;

      void eat(){
         cout << "eats\n";
      }
      void breathe(){
         cout << "breaths\n";
      }
};

class fish : public animal{
    public:
      int fins;

      void swim(){
        cout << "Swims...\n";
      }
};
int main(){
    fish f1;
    f1.fins = 4;
    cout << f1.fins << endl;

    f1.swim();
    f1.eat();
    return 0;
}