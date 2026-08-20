#include<iostream>
#include<queue>
using namespace std;

void firstNonRepeating(string str){
    queue<char> q;
    int freq[26] = {0};

    for(int i=0;i<str.size();i++){
        char ch = str[i];
        q.push(ch);
        freq[ch-'a']++;

        while(!q.empty() && freq[q.front()-'a'] > 1){
            q.pop();
        }

        if(q.empty()){
            cout << "-1 ";
        }else{
            cout << q.front() << " ";
        }
    }
}
int main(){
    string str1 = "aabccxb";

    firstNonRepeating(str1) ;
    return 0;
}