#include<iostream>
using namespace std;

int main(){
  int K,A,B;
  cin >> K >> A >> B;

  if(A%K == 0 || B%K == 0){
    cout << "OK" << endl;
    return 0;
  }
  int a,b;
  a = A/K;
  b = B/K;

  if(a==b){
    cout << "NG" << endl;
  }
  else{
    cout << "OK" << endl;
  }
  return 0;
}
