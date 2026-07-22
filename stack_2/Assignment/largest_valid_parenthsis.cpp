#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

int largest_parenthsis(string str){
    stack<int> s; 
    int ans = 0;
    int Idx = -1; 

    for(int i = 0; i < str.size(); i++){
        char ch = str[i];

        if(ch == '(' || ch == '{' || ch == '['){
            s.push(i); 
        } else {
            if(!s.empty()){
                s.pop(); 
                if(!s.empty()){
                    ans = max(ans, i - s.top());
                } else {
                    ans = max(ans, i - Idx);
                }
            }
            else {
                Idx = i;
            }
        }
    }
    return ans;
}

int main(){
    string str1 = "(())";
    string str2 = ")()())";

    cout << "Output for str1: " << largest_parenthsis(str1) << endl; 
    cout << "Output for str2: " << largest_parenthsis(str2) << endl; 
    return 0;
}