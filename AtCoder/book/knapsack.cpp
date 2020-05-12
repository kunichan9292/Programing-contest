#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int> >dp(6,vector<int>(11,-1));
int maxw = 10;

int knapsack(int n,int w,vector<int> ws,vector<int> ps){
  if(maxw<w) return -1;
  if(n >= 5) return 0;
  if(dp.at(n).at(w) != -1) return dp.at(n).at(w);
  return dp.at(n).at(w) = max(knapsack(n+1,w + ws.at(n),ws,ps) + ps.at(n),knapsack(n+1,w,ws,ps));
}

int main(){
  vector<int> ws = { 3, 4, 1, 2, 3 };
  vector<int> ps = { 2, 3, 2, 3, 6 };
  cout << knapsack(1,0,ws,ps) << endl;
}
