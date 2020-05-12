#include<iostream>
#include<map>
using namespace std;

int main(){
  long long X;
  cin >> X;

  map<long long,long long>res;
  for (long long i = 1; i * i <= X; ++i) {
    if (X % i == 0) {
      res[i]=X/i;
    }
  }
}
