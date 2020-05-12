#include<iostream>
#include<vector>
using namespace std;

vector<vector<bool> >grid(100,vector<bool>(100,false)); // マス目
vector<int>vx = {1,-1,0,0}; // x軸方向の移動
vector<int>vy = {0,0,1,-1}; // y軸方向の移動
vector<double>prob(4); // 各方向に遷移する確率

double dfs(int x, int y, int N){
  if(grid.at(x).at(y) == true) return 0;
  if(N == 0) return 1;
  grid.at(x).at(y) = true;
  double ret = 0;
  for(int i=0;i<4;i++){
    ret += dfs(x+vx.at(i),y+vy.at(i),N-1)*prob.at(i);
  }
  grid.at(x).at(y) = false;
  return ret;
}

int main(){
  int N; cin >> N;
  for(int i=0;i<4;i++){
    cin >> prob.at(i);
    prob.at(i) /= 100;
  }

  cout << dfs(50,50,N) << endl;
}
