#include<iostream>
using namespace std;

int main(){
  int N,K,M;
  cin >> N >> K >> M;
  int sum=0;
  int A;
  for(int i=0;i<N-1;i++){
    cin >> A;
    sum += A;
  }

  if(N*M-sum>K){
    cout << "-1" << endl;
  }
  else if(N*M<sum){
    cout << '0' << endl;
  }
  else{
    cout << N*M-sum << endl;
  }
}
