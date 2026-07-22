#include<iostream>
#include<stack>
#include<string>
using namespace std;

string revString(string str){
    string ans;
    stack<char> s;

    for(int i=0;i<str.size();i++){
        s.push(str[i]);
    }

    while(!s.empty()){
        char top = s.top();
        ans += top;
        s.pop();
    }
    return ans;
}
int main(){
    // stack<string> s;
    // s.push("a");
    // s.push("b");
    // s.push("c");
    // s.push("d");

    // while(!s.empty()){
    //     cout << s.top() << " ";
    //     s.pop();
    // }

    string str = "abcd";
    cout << "reverse = " <<revString(str)  << endl;
    return 0;
}