#include<iostream>
#include<vector>
using namespace std;

int main (){
  int K,N;
  cin >> K >> N;
  vector<int>A(N);
  for(int i=0;i<N;i++){
    cin >> A.at(i);
  }
  int max=A.at(0)+K-A.at(N-1);
  for(int i=1;i<N;i++){
    if(max<A.at(i)-A.at(i-1)){
      max=A.at(i)-A.at(i-1);
    }
  }
  cout << K-max << endl;
}
