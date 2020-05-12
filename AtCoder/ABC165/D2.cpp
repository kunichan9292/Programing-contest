#include<iostream>
using namespace std;

int main(){
  long long A,B,N;
  cin >> A >> B >> N;

  long long x = (A*N/B)-A*(N/B);

  if(x>=0){
    cout << x << endl;
  }
  else{
    cout << '0' << endl;
  }
}
