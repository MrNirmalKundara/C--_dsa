#include<iostream>
#include<string>
using namespace std;

int main(){
    // string str = "hello";
    // cout << str << endl;
    // str = "I am Nirmal Kundara";
    // cout << str;

    // string str1;
    // cin >> str;
    // getline(cin,str1,'&');
    // cout << " the string is : " << str1;


      // for each loop
         // method 1
    // string str = "Nirmal kundara";
    // for(int i=0;i<str.length();i++){
    //     cout << str[i] << endl;
    // }
    // cout << "\n";

            // method 2
    string str = "nirmal kundara kota . i am from kota";
    // for(char ch : str){
    //     cout << ch << " ";
    // }

      // string member Function
    cout << str.length() << endl;
    cout << str[2] << " = " << str.at(2)<<endl;
    cout << str.substr(2,4) << endl;
    cout << str.find("kun") << endl;
    cout << str.find("kota",22) << endl;

    return 0;
}
