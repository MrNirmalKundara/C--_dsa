#include<iostream>
using namespace std;

class car {
    string name;
    string color;

public:
  
                 // non-parameterized constructor
    car(){
        cout << "the constructor without parameter \n";
    }

               // parameterized constructor
    // car(string newName,string colorValue){
    //     cout << "the constructor is called. object being created..\n";
    //     name = newName;
    //     color = colorValue; 
    // }
               //or

           // using special pointer
    car(string name,string color){
        cout << "the constructor is called. object being created..\n";
        // this->name = name;
               // or
        (*this).name = name;

        this->color = color; 
    }

       // getters
    string getName(){
        return name;
    }
    string getColor(){
        return color;
    }

    void start(){
        cout << "car has started...." << endl;
    }
    void stop(){
        cout << "car has stopped...." << endl;
    } 

            // custom copy constructor
    car(car &original){
        cout << "the copying original to new...." << endl;
        name = original.name;
        color = original.color;
    }        
    
};

int main(){
    car c0;  // non - parameter
    car c1("audi","Z - black");  // with parameter
    // c1.start();
    // c1.stop();

    cout << "car name is : " << c1.getName() << endl;
    cout << "car color is : " << c1.getColor() << endl;

    car c2(c1);
    cout << "car name is : " << c2.getName() << endl;
    cout << "car color is : " << c2.getColor() << endl;

    return 0;
}