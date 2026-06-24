#include<iostream>
using namespace std;

class teacher{
    public:
    int salary;
    string subjects;
};

class student{
   public:
   int id;
   float cgpa;
};

class TA : public teacher,public student{
    public:
    string name;
};

int main(){
    TA ta1;
    ta1.name = "Nirmal Kundara";
    ta1.subjects = "c++";
    cout << ta1.subjects << endl;
    return 0;
}