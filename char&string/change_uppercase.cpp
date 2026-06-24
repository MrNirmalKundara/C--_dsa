#include<iostream>
#include<cstring>
using namespace std;

void UpperCase(char word[],int n){
    for(int i=0;i<n;i++){
        char ch = word[i];
        if(ch>='A' && 'Z'>=ch){
            continue;
        }
        else{
            word[i] = ch- 'a' + 'A';
        }
    }
}

int main(){
    char word[] = "ApPle";
    int n = strlen(word);

    UpperCase(word,n);
    cout << word << endl;
    return 0;
}