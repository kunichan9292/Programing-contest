#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

template<class T> inline bool chmax(T& a, T b){
  if(a<b){
    a = b;
    return true;
  }
  return false;
}

int main(){
  int N,W; cin >> N >> W;
  vector<int>weight(N+1);
  vector<int>value(N+1);
  for(int i=1;i<=N;i++){
    cin >> weight.at(i) >> value.at(i);
  }

  vector<vector<long long> >dp(N+1,vector<long long>(W+1,0));
  for(int i=1;i<=N;i++){
    for(int j=1;j<=W;j++){
      if(j - weight.at(i) >=0){
        chmax(dp.at(i).at(j),dp.at(i-1).at(j-weight.at(i)) + value.at(i));
      }
      chmax(dp.at(i).at(j),dp.at(i-1).at(j));
    }
  }
  cout << dp.at(N).at(W) << endl;
}
