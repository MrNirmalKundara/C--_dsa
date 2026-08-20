#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Job{
  public:
    int id;
    int deadline;
    int profit;

    Job(int id,int deadline,int profit){
        this->id = id;
        this->deadline = deadline;
        this->profit = profit;
    }
};

// bool compare(pair<int, int> p1, pair<int, int> p2){
//     return p1.second > p2.second;
// }
int JobSequence(vector<pair<int, int>> &pairs){
    // step 1 :-- sort pair decreasing order;
    // sort(job.begin(),job.end(),compare);

    // step 2 :-- select oth position
    // int profit = job[0].second;
    // int safedealine = 2;

    // for(int i=1;i<job.size();i++){
    //     if(job[i].first >= safedealine){
    //         profit += job[i].second;
    //         safedealine++;
    //     }
    // }
    // cout << "max profit is : " << profit << endl;
    // return profit;



    int n = pairs.size();
    vector<Job> jobs;
    for(int i=0;i<n;i++){
        jobs.emplace_back(i,pairs[i].first,pairs[i].second);
    }

    sort(jobs.begin(),jobs.end(),[](Job &a, Job &b){
        return a.profit > b.profit;
    });

    cout << "Selected jobs: J" << jobs[0].id << endl;
    int profit  = jobs[0].profit;
    int safeDeadline = 2;

    for(int i=1;i<n;i++){
        if(jobs[i].deadline >= safeDeadline){
            cout << "selected Jobs: J" << jobs[i].id << " ";
            profit += jobs[i].profit;
            safeDeadline++;
        }
    }
    cout << "\nMax profit is: " << profit << endl;
    return profit;
}
int main(){
    vector<pair<int ,int>> job(4,make_pair(0,0));
    job[0] = make_pair(4,20);
    job[1] = make_pair(1,10);
    job[2] = make_pair(1,40);
    job[3] = make_pair(1,30);

    JobSequence(job);
    return 0;
}