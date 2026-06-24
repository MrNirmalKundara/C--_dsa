#include<iostream>
using namespace std;

void Duplicate(string str,string ans,int i,int map[26]){
    if(i == str.size()){
        cout << "ans is...." << ans << endl;
        return;
    }
        char ch = str[i];
        int mapIdx = (int)(ch-'a');

        if(map[mapIdx] == true){
            Duplicate(str,ans,i+1,map);
        }else{
            map[mapIdx] = true;
            Duplicate(str,ans+str[i],i+1,map);
        }
}

int main(){
    string str = "appnnacollege";
    string ans = "";
    int map[] = {false};

    Duplicate(str,ans,0,map);
    return 0;
}