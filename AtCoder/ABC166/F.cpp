#include<iostream>
#include<vector>
using namespace std;

bool func(int i,int x,const vector<int> &a,vector<vector<int> > &dp){
  if(i==0){
    if(x==0) return true;
    else return false;
  }
  if(x<0) return false;

  if(dp.at(i).at(x) != -1) return dp.at(i).at(x);

  if(func(i-1,x-a.at(i-1),a,dp)) return dp.at(i).at(x)=1;
  if(func(i-1,x,a,dp)) return dp.at(i).at(x)=1;

  return dp.at(i).at(x)=0;
}

int main(){

  int n; cin >> n;
  long long A,B,C; cin >> A >> B >> C;
  vector<string>s(n);
  for(int i=0;i<n;i++) cin >> s.at(i);
  int X; cin >> X;
  const int MAX=100000;
  vector<vector<int> >dp(n+1,vector<int>(MAX+1,-1));

  if(func(n,X,a,dp)) cout << "Yes" << endl;
  else cout << "No" << endl;
}
