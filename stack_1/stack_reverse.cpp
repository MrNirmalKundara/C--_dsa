#include<iostream>
#include<stack>
using namespace std;

void pushAtbottom(stack<int> &s,int val){
     if(s.empty()){
        s.push(val);
        return;
    }
    int temp1 = s.top();
    s.pop();
    pushAtbottom(s,val);
    s.push(temp1);
}

void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int temp = s.top();
    s.pop();
    reverse(s);

    pushAtbottom(s,temp);
}

void printStack(stack<int> s){
    while(!s.empty()){
        cout  << s.top() << " ";
        s.pop();
    }
    cout << "\n";
}
int main(){
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    cout << "original Stack..";
    printStack(s1);

    reverse(s1);
    cout << "reverse Stack..";
    printStack(s1);
    return 0;
}