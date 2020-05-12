#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

const long long INF = 1LL << 60;

template<class T> inline bool chmin(T& a, T b){
  if(a > b){
    a = b;
    return true;
  }
  return false;
}

int main(){
  int N,K; cin >> N >> K;
  vector<int>h(N + K);
  for(int i=0;i<N;i++){
    cin >> h.at(i);
  }

  vector<long long>dp(N + K,INF);
  dp.at(0) = 0;
  for(int i=0;i<N;i++){
    for(int j=1;j<=K;j++){
      chmin(dp.at(i+j),dp.at(i) + abs(h.at(i) - h.at(i+j)));
    }
  }
  cout << dp.at(N-1) << endl;
}
