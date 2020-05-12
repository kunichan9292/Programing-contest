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
  int N; cin >> N;
  vector<vector<long long> >happy(N,vector<long long>(3));
  for(int i=0;i<N;i++){
    for(int j=0;j<3;j++){
      cin >> happy.at(i).at(j);
    }
  }
  vector<vector<long long> >dp(N,vector<long long>(3,-1));
  for(int i=0;i<3;i++){
    dp.at(0).at(i) = happy.at(0).at(i);
  }
  for(int i=1;i<N;i++){
    for(int j=0;j<3;j++){
      for(int k=0;k<3;k++){
        if(j==k) continue;
        chmax(dp.at(i).at(j),dp.at(i-1).at(k) + happy.at(i).at(j));
      }
    }
  }
  cout << max(dp.at(N-1).at(0),max(dp.at(N-1).at(1),dp.at(N-1).at(2))) << endl;
}
