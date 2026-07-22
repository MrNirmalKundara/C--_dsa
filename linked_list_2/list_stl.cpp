#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void printList(list<int> ll){
    list<int>::iterator itr;
    for(itr = ll.begin();itr != ll.end();itr++){
        cout << (*itr) << "->";
    }
    cout << "NULL" << endl;
}
int main(){
    list<int> ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_front(0);
    printList(ll);

    cout << "size of the linked list...." << ll.size() << endl;

    cout << "head..." << ll.front() << endl;
    cout << "tail..." << ll.back() << endl;

    return 0;
}