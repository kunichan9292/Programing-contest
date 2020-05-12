#include<iostream>
#include<vector>
using namespace std;

void pour(vector<int> capacities,vector<int> &bottles,int fromId,int toId){
  if(bottles.at(fromId) + bottles.at(toId) <=capacities.at(toId)){
    bottles.at(toId) += bottles.at(fromId);
    bottles.at(fromId) = 0;
  }
  else{
    bottles.at(fromId) = bottles.at(fromId) + bottles.at(toId) - capacities.at(toId);
    bottles.at(toId) = capacities.at(toId);
  }
}

int main(){
  int N,M; cin >> N >> M;
  vector<int>capacities(N);
  vector<int>bottles(N);
  for(int i=0;i<N;i++){
    cin >> capacities.at(i) >> bottles.at(i);
  }

  for(int i=0;i<M;i++){
    int fromId, toId;
    cin >> fromId >> toId;

    pour(capacities,bottles,fromId,toId);
  }
  for(int i=0;i<N-1;i++){
    cout << bottles.at(i) << " ";
  }
  cout << bottles.at(N-1) << endl;
}
