#include<iostream>
using namespace std;

int main(){
  int N,A,B;

  cin >> N >> A >> B;
  if(A*N>B){
    cout << B << endl;
  }

  if(A*N<=B){
    cout << A*N << endl;
  }
}
