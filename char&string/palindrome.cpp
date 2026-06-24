#include<iostream>
#include<cstring>
using namespace std;

bool Ispalindrome(char word[],int n){
    int st = 0,end = n-1;
    while(st<end){
        if(word[st++] != word[end--]){
            cout << "that is not palindrome "<< endl;
            return false;
        }
    }
    cout << "that is valid palindrome ";
    return true;
}

int main(){
    char word[] = "racecar";
    int n = strlen(word);
    Ispalindrome(word,n);
    return 0;
}