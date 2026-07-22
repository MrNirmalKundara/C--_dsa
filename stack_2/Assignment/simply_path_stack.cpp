#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;

string simplifyPath(string path){
    string ok;
    stack<string> st;

    int i=0; int n = path.size();
    while(i<n){
      
        while(i<n && path[i]=='/'){
            i++;
        }
        ok="";
        while(i<n && path[i]!='/'){
            ok += path[i++];
        }

        if(ok == ".."){
           if(!st.empty()){
              st.pop();
           }
        }
        else if(ok!="" && ok!="."){
            st.push(ok);
            ok.clear();
        }
    }

    string result = "";
    while(!st.empty()){
         result = "/" + st.top() + result;
         st.pop();
    }
    return result;
}
int main(){

    string rawPath = "/home//foo/../bar/";
    cout << "Original: " << rawPath << endl;
    cout << "Simplified: " << simplifyPath(rawPath) << endl;
    return 0;
}