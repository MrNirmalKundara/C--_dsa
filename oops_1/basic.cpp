#include<iostream>
using namespace std;

class student {
            // properties
private:  // in private access modifier means only access in class
     string name;
     int mobile_no;
    

public:  // in public access modifier means access each func(like main and call func).
     int Id;
     float cgpa;    

            // method (member function)
    void getPercentage(){
        cout << (cgpa*10) << "%\n";
    }
   
     // setters and getters basicly use for private properties(for updation )
           // setters
    void setName(string nameVal){
        name = nameVal;
    }
    void setNo(int no_value){
        mobile_no = no_value;
    }

         // getters 
    string getName(){
        return name;
    }
    int getNo(){
        return mobile_no;
    }
};

// class user{
//     string userName;
//     string password;
//     int id;
//     string bio;

//     void deactivate(){
//         cout << "deleting account : " << endl;
//     }
//     void editbio(string newbio){
//         bio = newbio;
//         cout << 
//     }
// };

int main(){
    student s1;
    // cout << sizeof(s1) << endl;
    
    // // s1.name = "nirmal kundara";
    // s1.cgpa = 8.9;
    // cout << "the CGPA Is : " << s1.cgpa<<endl;;
    // s1.Id = 3029;
    // cout << "student id is : " << s1.Id << endl; 
    // s1.getPercentage();


    s1.setName("Nirmal Kundara");
    s1.setNo(9571);

    cout << "Name is : " << s1.getName() << endl;
    cout << "Mobile no. is : " << s1.getNo() << endl;
    return 0;
}