#include<iostream>
using namespace std;

int main(){
  long long N,K;
  cin >> N >> K;

  long long count=1;
  long long a=K;
  while(a<=N){
    a*=K;
    count++;
  }
  cout << count << endl;
}
