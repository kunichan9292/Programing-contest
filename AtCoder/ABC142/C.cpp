#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N; cin >> N;
  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin >> A.at(i);
  }

  vector<int>ans(N);
  for(int i=0;i<N;i++){
    ans.at(A.at(i)-1) = i+1;
  }
  for(int i=0;i<N-1;i++){
    cout << ans.at(i) << ' ' ;
  }
  cout << ans.at(N-1) << endl;
}
