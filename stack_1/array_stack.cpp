#include<iostream>
#define MAX 12
using namespace std;
class stack{
    public:
      int top;
      int arr[MAX];

      stack(){
        top = -1;
      }

      void push(int x){
        if(top>=(MAX-1)){
            cout << "the stack is overflow.."<<endl;
        }else{
            top++;
            arr[top] = x;
            cout << "x will be push in the stack"<< endl;
        }
      }

      int  pop(){
        if(top<1){
            cout << "the stack is empty.. " << endl;
            return 0;
        }else{
            int x = arr[top];
            top--;
            return x;
        }
      }

      void peek() {
        if (top < 0) {
            cout << "Stack khali hai.\n";
        } else {
            cout << "Top element hai: " << arr[top] << "\n";
        }
    }
};

int main(){
    stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s1.push(6);

    s1.peek();


    return 0;
}