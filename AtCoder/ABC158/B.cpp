#include<iostream>
using namespace std;

int main(){
  long long N,A,B;
  cin >> N >> A >> B;
  long long sum=(N/(A+B))*A;

  if(N%(A+B)<=A){
    cout << sum + N%(A+B) << endl;
  }
  else{
    cout << sum +A << endl;
  }
}
