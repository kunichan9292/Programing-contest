#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> >dp(5,vector<int>(6,0));

int dfs(int h,int w){
  if(h == 0 || w == 0) return 1;
  if(dp.at(h).at(w) != 0) return dp.at(h).at(w);

  return dp.at(h).at(w) = dfs(h-1,w) + dfs(h,w-1);
}

int main(){
  int h = 4;
  int w = 5;

  cout << dfs(h,w) << endl;

}
