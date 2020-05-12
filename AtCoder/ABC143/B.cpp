#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N; cin >> N;
  long long sum=0;
  vector<int>d(N);
  for(int i=0;i<N;i++){
    cin >> d.at(i);
  }

  for(int i=0;i<N-1;i++){
    for(int j=i+1;j<N;j++){
      sum += d.at(i)*d.at(j);
    }
  }
  cout << sum << endl;
}
