#include<iostream>
using namespace std;

class parent{
    public: 
       parent(){
        cout << "that is parent constructor...\n";
       }

       ~parent(){
        cout << "that is parent deconstructor...\n";
       }
};

class child : public parent{
    public:
      child(){
        cout << "that is child constructor....\n";
      }

      ~child(){
        cout << "that is child deconstructor....\n";
      }
};
int main(){
    child ch1;
    return 0;
}