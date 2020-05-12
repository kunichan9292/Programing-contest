#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int N,M; cin >> N >> M;
  vector<int>a(M);
  for(int i=0;i<M;i++){
    cin >> a.at(i);
  }
  sort(a.begin(),a.end());
  a.push_back(-1);
  int now = 0;
  vector<long long>dp(N+1);
  dp.at(0) = 1;
  for(int i=1;i<=N;i++){
    if(i == a.at(now)){
      now++;
      continue;
    }
    dp.at(i) += dp.at(i-1);
    if(i>1) dp.at(i) += dp.at(i-2);
    dp.at(i) = dp.at(i)%1000000007;
  }
  cout << dp.at(N)%1000000007 << endl;
}
