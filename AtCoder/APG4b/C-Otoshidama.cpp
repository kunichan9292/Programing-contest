#include<iostream>
using namespace std;

int main(){
  int N,Y;
  cin >> N >> Y;
  bool finished = false;
  for(int i=0;i<=N;i++){
    for(int j=0;j<=N;j++){
      if(10000*i+5000*j+1000*(N-i-j)==Y && N-i-j>=0){
        cout << i << ' ' << j << ' ' << N-i-j << endl;
        finished=true;
        break;
      }
    }
    if(finished){
      break;
    }
    if(i==N){
      cout << -1 << ' ' << -1 << ' ' << -1 << endl;
    }
  }
}
