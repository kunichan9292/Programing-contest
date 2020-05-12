#include<iostream>
using namespace std;

int main(){
  int N; cin >> N;
  string S; cin >> S;

  int count = 0;
  for(int i=0;i<S.size()-1;i++){
    if(S.at(i) != S.at(i+1)){
      count++;
    }
  }
  cout << count+1 << endl;
}
