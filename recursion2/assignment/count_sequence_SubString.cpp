#include<iostream>
using namespace std;

void subString(string str,string ans,int i){
    if(i == str.size()){
        cout << "ans is: " << ans << endl;
        return;
    }
    // subString(str,ans+str[i],i+1);
    subString(str,ans,i+1);
    subString(str,ans+str[i],i+1);
}
int main(){
    subString("abcab","",0);
    return 0;
}