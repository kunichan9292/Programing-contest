#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int n; cin >> n;
  vector<long long>dp(n+1);
  dp.at(0) = 1;
  for(int i=1;i<=n;i++){
    dp.at(i) += dp.at(i-1);
    if(i>1) dp.at(i) += dp.at(i-2);
    if(i>2) dp.at(i) += dp.at(i-3);
  }
  long long day,year;
  if(dp.at(n)%10 == 0) day = dp.at(n)/10;
  else day = dp.at(n)/10 +1;
  if(day%365 == 0) year = day/365;
  else year = day/365 + 1;
  cout << year << endl;
}
