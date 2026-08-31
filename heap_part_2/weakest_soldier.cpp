#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Row{
  public:
    int count;
    int Idx;

    Row(int count,int Idx){
        this->count = count;
        this->Idx = Idx;
    }

    bool operator < (const Row &obj) const{
        if(this->count == obj.count){
            return this->Idx > obj.Idx;
        }
        return this->count > obj.count;
    }
};

void weakestSoldier(vector<vector<int>> &matrix,int k){
    vector<Row> rows;

    for(int i=0;i<matrix.size();i++){
        int Soldier = 0;
        for(int j=0;j<matrix[i].size() && matrix[i][j]==1;j++){
            Soldier++;
        }

        rows.push_back(Row(Soldier,i));
    }

    priority_queue<Row> pq(rows.begin(),rows.end());

    for(int i=0;i<k;i++){
        cout << "Row" << pq.top().Idx << endl; 
        pq.pop();
    }
}
int main(){
    vector<vector<int>> matrix = {{1,0,0,0},{1,1,1,1},{1,0,0,0},{1,0,0,0}};

    weakestSoldier(matrix,2);
    return 0;
}