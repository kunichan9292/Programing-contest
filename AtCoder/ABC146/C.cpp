#include<iostream>
#include<cmath>
using namespace std;

int main(){
  long long A,B,X;
  cin >> A >> B >> X;
  long long N=1;
  while(1){
    if(X<A*N+B*log10(N)+1){
      break;
    }
    N++;
  }
  cout << N-1 << endl;
}
