#include<iostream>
#include<vector>
using namespace std;
using Graph = vector<vector<int> >;

int Salaries(int i,Graph G){
  if(G.at(i).empty()) return 1;
  int sum = 0;
  for(auto buka : G.at(i)){
    sum += Salaries(buka,G);
  }
  return 2*sum;
}

int main(){
  int N; cin >> N;
  Graph G(N);
  for(int i=0;i<N-1;i++){
    int a,b; cin >> a >> b;
    G.at(a-1).push_back(b-1);
  }
  cout << Salaries(0,G) << endl;
}
