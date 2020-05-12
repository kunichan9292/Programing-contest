#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N,M;
  cin >> N >> M;
  vector<int>count(N,0);
  vector<int>ai(M);
  vector<int>bi(M);

  for(int i=0; i<M;i++){

    cin >> ai.at(i);
    for(int j=1;j<=N;j++){
      if(ai.at(i)==j){
        count.at(j-1)++;
      }
    }

    cin >> bi.at(i);
    for(int j=1;j<=N;j++){
      if(bi.at(i)==j){
        count.at(j-1)++;
      }
    }

  }

  for(int i=0;i<N;i++){
    cout << count.at(i) << endl;
  }
}
