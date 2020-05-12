#include<iostream>
using namespace std;

int main(){
  int N,M;
  cin >> N >> M;

  int count_N=0;
  int count_M=0;

  if(N>=2){
    count_N=N*(N-1)/2;
  }
  if(M>=2){
    count_M=M*(M-1)/2;
  }
  cout << count_N + count_M << endl;
}
