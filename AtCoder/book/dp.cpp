#include<iostream>
#include<vector>
using namespace std;

int main(){
  int h = 5;
  int w = 4;
  vector<vector<int> >dp(h+1,vector<int>(w+1));
  dp.at(0).at(0) = 1;
  for(int i=0;i<=h;i++){
    for(int j=0;j<=w;j++){
      if(i != 0) dp.at(i).at(j) += dp.at(i-1).at(j);
      if(j != 0)dp.at(i).at(j) += dp.at(i).at(j-1);
    }
  }
  cout << dp.at(h).at(w) << endl;
}
