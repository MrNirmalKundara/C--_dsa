#include<iostream>
using namespace std;

class user {
    int id;
    string password;

public:
    string username;

    user(int id){
        this->id = id;
    }
    int getId(){
        return id;
    }

    // void setPassword(string gen_pass){
    //     password = gen_pass;
    // }   
                // or
    void setPassword(string password){
        this->password = password;
    }
    string getPassword(){
        return password;
    }  
};
int main(){
    user u1(3029);
    cout << "user Id is .. " << u1.getId() << endl;

    u1.setPassword("Nirmal@9571");
    cout << "your password is : " << u1.getPassword() << endl;

    return 0;
}