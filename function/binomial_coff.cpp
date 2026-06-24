#include<iostream>
using namespace std;

int factorial(int m){
    int fact = 1;
    for(int i=1;i<=m;i++){
        fact = fact*i;
    }
    return fact;
}

int binomial(int n,int r){
    int val1 = factorial(n);
    int val2 = factorial(r);
    int val3 = factorial(n-r);

    int final_val = (val1)/(val2*val3);
    return final_val;
}
int main(){
    cout << "the binomial values is :"<< binomial(5,3);
    return 0;
}