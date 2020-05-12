#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxDonations(vector<int>donations){
  int ans = 0;
  int N = donations.size();
  vector<int>dp(N);
  for(int i=0;i<N-1;i++){
    if() dp.at(i) = max(dp.at(i-2));
  }
  if(n>N)return 0;
  return max(maxDonations(n+1),maxDonations(n+2)+donations.at(n-1));
}

int main(){
  int N; cin >> N;
  vector<int>donations(N);
  for(int i=0;i<N;i++){
    cin >> donations.at(i);
  }

  maxDonations(donations);

}
