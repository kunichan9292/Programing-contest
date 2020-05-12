#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N,M;
  cin >> N >> M;
  vector<int>ans(N);
  vector<int>s(M);
  vector<int>c(M);
  for(int i=0;i<M;i++){
    cin >> s.at(i);
    cin >> c.at(i);
  }

  for(int i=0;i<M-1;i++){
    for(int j=i+1;j<M;j++){
      if(s.at(i) == s.at(j) && c.at(i) != c.at(j)){
        cout << "-1" << endl;
        return 0;
      }
    }
  }
  for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
      if(i+1 == s.at(j)){
        ans.at(i) = c.at(j);
      }
    }
  }
  if(ans.at(0) == 0 && N != 1){
    cout << "-1" << endl;
    return 0;
  }
  for(int i=0;i<N;i++){
    cout << ans.at(i);
  }
  cout << endl;
}
