#include<iostream>
#include<cstring>
using namespace std;

int main(){
    // char ch = 'y';
    // int position = ch - 'a'; 
    // cout << int (ch) << endl;
    // cout << int (position) << endl;

    // char work[] = "Nirmal Kundara";
    // char work1[] = {'H','E','l','l','o','\0'};
    // cout << work << endl;
    // cout << "length of string is : " << strlen(work) << endl;
    // cout << work1 << endl;
    // cout << "length of string is : " << strlen(work1) << endl;


       // for only print word (after whitespace not printing)
    // char word[10];
    // cin >> word ;
    // cout << "your word is : " << word << endl;
    // cout << "the length is : " << strlen(word) << endl;

       // for printing paragraph / sentence
    char sentence[100];
    cin.getline(sentence,30,'*'); // cin.getline(string_name,max_sentence,stop_point)
    cout << "your sentence is : " << sentence << endl;
    cout << "the length is : " << strlen(sentence) << endl;

    return 0;
}