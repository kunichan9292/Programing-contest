#include<iostream>
using namespace std;

int main(){
  int N;
  cin >> N;
  int N0=N;
  int count=0;
  while(N0>0){
    count+=N0%10;
    N0=N0/10;
  }
  if(N%count==0){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}
