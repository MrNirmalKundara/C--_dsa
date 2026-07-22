#include<iostream>
using namespace std;

void subset(string str,string subStr){
    int n = str.size();
    if(str.size() == 0){
        cout << subStr << endl;
        return;
    }

    char ch = str[0];
    subset(str.substr(1,n-1), subStr + ch);
    subset(str.substr(1,n-1), subStr);
}
int main(){
    string str = "abc";
    string subStr = "";
    subset(str,subStr);
    return 0;
}