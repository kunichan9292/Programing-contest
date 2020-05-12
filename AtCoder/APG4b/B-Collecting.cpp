#include<iostream>
using namespace std;

int main(){
  int N,K,x;
  int c=0;
  cin >> N >> K;

  for(int i=0;i<N;i++){
    cin >> x;
    if(K<=2*x){
      c+=2*(K-x);
    }
    else{
      c+=2*x;
    }
  }
  cout << c << endl;
}
