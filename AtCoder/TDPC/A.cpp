#include<iostream>
#include<vector>
#include<bitset>
using namespace std;

int main(){
  int N; cin >> N;
  vector<int>p(N);
  for(int i=0;i<N;i++){
    cin >> p.at(i);
  }
  vector<vector<bool> >dp(N+1,vector<bool>(10001,false));

  dp.at(0).at(0) = true;

  for(int i=1;i<=N;i++){
    for(int j=0;j<=10000;j++){
      if(dp.at(i-1).at(j) || (j>=p.at(i-1) &&  dp.at(i-1).at(j-p.at(i-1)))){
        dp.at(i).at(j) = true;
      }
    }
  }
  int count =0;
  for(int i=0;i<=10000;i++){
    if(dp.at(N).at(i)) count++;
  }
  cout << count << endl;
}
