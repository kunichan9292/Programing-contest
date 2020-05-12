#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int N,K;
  cin >> N >> K;
  vector<int>H(N);

  for(int i=0;i<N;i++){
    cin >> H.at(i);
  }
  sort(H.begin(),H.end());
  if(N<=K){
    cout << 0 << endl;
  }
  else{
    long long count=0;
    for(int i=0;i<N-K;i++){
      count += H.at(i);
    }
    cout << count << endl;
  }
}
