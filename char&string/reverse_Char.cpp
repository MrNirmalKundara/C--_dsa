#include<iostream>
#include<cstring>
using namespace std;

void reverseString(char word[],int n){
    int st = 0, end = n-1;
    while(st<=end){
        swap(word[st],word[end]);
        st++;
        end--;
    }
}

int main(){
    char word[] = "Nirmal";
    int n = strlen(word);

    reverseString(word,n);
    cout << "the reverse String is : " << word <<endl;
    return 0;
}