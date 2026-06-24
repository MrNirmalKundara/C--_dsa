#include<iostream>
using namespace std;

class car{
    public:
      string name;
      string color;
      int *mileage;

    car(string name,string color){
        this->name = name;
        this->color = color;
        mileage = new int;  // dynamically allocation
        *mileage = 12;
    }

          // copy constructor
    car(car &original){
        name = original.name;
        color = original.color;

                        // shallow copy
        // mileage = original.mileage;

                        // deep copy
        mileage = new int;
        *mileage = *original.mileage;
    }

           // CUSTOM Destructor :- it is use for deleting object in memory
    ~car(){
        cout << "deleting objects...." << endl;
        if(mileage != NULL){
        delete mileage;
        mileage = NULL;
        }
    }
};
int main(){

    car c1("maruti suzuki","black");
    car c2(c1);
    cout << c2.name << endl;
    cout << c2.color << endl;
    cout << *c2.mileage << endl;
    cout << *c1.mileage << endl;

    *c2.mileage = 23;
           // after deep copy
    cout << *c1.mileage << endl;
    cout << *c2.mileage << endl;
    return 0;
}