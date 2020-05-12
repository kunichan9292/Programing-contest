#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int longestPath(vector<string> Maze,int startRow,int startCol,vector<int> moveRow,vector<int> moveCol){
  int MAX = 0;
  vector<vector<int> >board(50,vector<int>(50));
  for(int i=0;i<Maze.size();i++){
    for(int j=0;j<Maze.at(0).size();j++){
      board.at(i).at(j) = -1;
    }
  }
  board.at(startRow).at(startCol) = 0;
  queue<int>queueX,queueY;
  queueX.push(startCol);
  queueY.push(startRow);

  while(queueX.size()>0){
    int x = queueX.front();
    int y = queueY.front();
    queueX.pop();
    queueY.pop();
    for(int i=0;i<moveRow.size();i++){
      int nextX = x + moveCol.at(i);
      int nextY = y + moveRow.at(i);
      if(  0 <= nextX && nextX < Maze.at(0).size()
        && 0 <= nextY && nextY < Maze.size()
        && Maze.at(nextY).at(nextX) == '.'
        && board.at(nextY).at(nextX) == -1){
        queueX.push(nextX);
        queueY.push(nextY);
        board.at(nextY).at(nextX) = board.at(y).at(x) + 1;
      }
    }
  }
  for(int i=0;i<Maze.size();i++){
    for(int j=0;j<Maze.at(0).size();j++){
      if(Maze.at(i).at(j) == '.' && board.at(i).at(j) == -1){
        return -1;
      }
      MAX = max(MAX,board.at(i).at(j));
    }
  }
  return MAX;
}

int main(){
  int N,M; cin >> N >> M;
  vector<string>Maze(N);
  for(int i=0;i<N;i++){
    cin >> Maze.at(i);
  }
  int startRow,startCol; cin >> startRow >> startCol;
  int A; cin >> A;
  vector<int> moveRow(A);
  vector<int> moveCol(A);
  for(int i=0;i<A;i++){
    cin >> moveRow.at(i);
    cin >> moveCol.at(i);
  }

  cout << longestPath(Maze,startRow,startCol,moveRow,moveCol) << endl;

}
