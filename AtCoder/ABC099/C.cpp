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
  int N; cin >> N;
  vector<long long>dp(N+1,INF);
  dp.at(0) = 0;
  for(int i=1;i<=N;i++){
    for(int j=1;j<=i;j *= 6){
      chmin(dp.at(i),dp.at(i-j)+1);
    }
    for(int j=1;j<=i;j *= 9){
      chmin(dp.at(i),dp.at(i-j)+1);
    }
  }
  cout << dp.at(N) << endl;
}
