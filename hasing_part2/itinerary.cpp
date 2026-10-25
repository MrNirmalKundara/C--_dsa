#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;

void printItinerary(unordered_map<string, string> &tickets){
    
    // step 1 : create a set of all destinations
    unordered_set<string> to;
    for(pair<string, string> ticket : tickets){
        to.insert(ticket.second);
    }

    // step 2 : find the starting point of the itinerary
    string start = "";
    for(pair<string, string> ticket : tickets){
        if(to.count(ticket.first) == 0){
            start = ticket.first;
        }
    }
    cout << start << " -> ";
    string current = start;

    // step 3 : print the itinerary
    while(tickets.find(current) != tickets.end()){
        cout << tickets[current] << " -> ";
        current = tickets[current];
    }
    cout << endl;
}
int main(){
    unordered_map<string, string> tickets;
    tickets["chennai"] = "bangalore";
    tickets["mumbai"] = "delhi";
    tickets["goa"] = "chennai";
    tickets["delhi"] = "goa";

    printItinerary(tickets);
    return 0;
}