#include<iostream>
using namespace std;

int main(){
  long long X;
  cin >> X;

  int year=0;
  long long A=100;
  bool flag = true;

  while(flag){
    if(A>=X){
      flag =false;
    }
    A *=1.01;
    year++;
  }
  cout << year-1 << endl;
}
