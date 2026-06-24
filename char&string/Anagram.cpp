#include<iostream>
using namespace std;

bool IsAnagram(string str1,string str2){
        if(str1.length() != str2.length()){
            cout << "that is not valid Anagram : " << endl;
            return false;
        } 

        int count[26] = {0};
        for(int i=0;i<str1.length();i++){
            int idx = str1[i] - 'a';
            count[idx]++; 
        }

        for(int i=0;i<str2.length();i++){
            int idx = str2[i] - 'a';
            if(count[idx] == 0){
                cout << "that is not valid Anagram : " << endl;
                return false;
            }
            count[idx]--;
        }
        cout << "that is valid Anagram : " << endl;
        return true;
}
int main(){
string str1 = "bank";
string str2 = "kanb";

IsAnagram(str1,str2);
    return 0;
}