#include<iostream>
using namespace std;

int main(){
  int N,K;
  int screen=1;
  cin >> N >>K;

  for(int i=0;i<N;i++){
    if(screen*2>=screen+K){
      screen += K;
    }
    else{
      screen *= 2;
    }
  }
  cout << screen <<endl;
}
