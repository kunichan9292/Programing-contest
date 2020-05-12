#include<iostream>
using namespace std;

long long f(long long n){
  if(n<2){
    return 1;
  }
  long long func=n*f(n-2);
  return func;
}

int main(){
  long long N;
  cin >> N;
  long long func=f(N);

  long long count=0;
  while(func%10==0){
    func /=10;
    count++;
  }
  cout << count << endl;
}
