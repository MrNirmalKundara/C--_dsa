#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout << "enter teh string : ";
    getline(cin,str);

    int count = 0;
    for(int i=0;i<str.length();i++){
        char ch = str[i];

        if(ch == 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
               count++;
        }
    }
    cout << "the total lowercase vowels is : " << count << endl;
    return 0;
}