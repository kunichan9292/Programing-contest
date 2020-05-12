#include<iostream>
using namespace std;

int main(){
  long N,K;
  cin >> N >> K;
  N=N%K;
  if(2*N <= K){
    cout <<  N << endl;
  }
  else{
    cout << K-N << endl;
  }
}
