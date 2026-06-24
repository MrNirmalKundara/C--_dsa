#include<iostream>
#include<string>
using namespace std;

bool SwapOperation(string str1,string str2){
    int st = 0;
    int stf = st+1;
    int end = str1.length();
    for(int i=0;i<str2.length();i++){
        swap(str1[st],str1[stf++]);
        if(str1 == str2){
            cout << "that is string is same : "<< endl;
            return true;
        }
        st++;
    }
}

int main(){
    string str1,str2;
    cout << "Enter the first string : ";
    getline(cin,str1);
    cout << endl;
    cout << "Enter the second string : ";
    getline(cin,str2);

    SwapOperation(str1,str2);

    return 0;
}