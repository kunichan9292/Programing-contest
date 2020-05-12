#include<iostream>
using namespace std;

int main(){
  int N; cin >> N;
  double P;
  if(N%2==0){
    P = 0.5;
  }
  else{
    P = (double)((N+1)/2)/N;
  }
  cout << P << endl;
}
