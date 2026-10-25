#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

bool isAnagram(string s, string t){

    if(s.size() != t.size()){
        return false;
    }
        // step 1 :-- store the freq. of each element
    unordered_map<char,int> m;
    for(int i=0;i<s.size();i++){
        if(m.count(s[i])){
            m[s[i]]++;
        }else{
            m[s[i]] = 1;
        }
    }
      
        // step 2 :-- check the freq. of each element in t
    for(int j=0;j<t.size();j++){
        if(m.count(t[j])){
           m[t[j]]--;
           if(m[t[j]] == 0){
              m.erase(t[j]);
           }
        }else{
            return false;
        }
    }

    if(m.size() == 0){
        return true;
    }
    return false;
}

int main(){
    string s = "race";
    string t = "care";
    cout << isAnagram(s, t) << endl;
    return 0;
}