#include<iostream>
#include<stack>
#include<string>
#include<vector>
using namespace std;

string simplifyPath(string path){
    string ok;
    vector<string> store;

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
           if(!store.empty()){
              store.pop_back();
           }
        }
        else if(ok!="" && ok!="."){
            store.push_back(ok);
            ok.clear();
        }
    }

    string result = "/";
    for(int j=0;j<store.size();j++){
          result += store[j];
          if(j<store.size()-1){
            result += "/";
          }
    }
    return result;
}
int main(){

    string rawPath = "/home//foo/../bar/";
    cout << "Original: " << rawPath << endl;
    cout << "Simplified: " << simplifyPath(rawPath) << endl;
    return 0;
}