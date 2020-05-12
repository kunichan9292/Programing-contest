#include<iostream>
using namespace std;

int main(){
  int N;
  char S;
  cin >> N;

  for(int i=0;i<N;i++){
    cin >>S;
    if(S=='Y'){
      cout << "Four" << endl;
      break;
    }
    if(i == N-1 && S != 'Y'){
      cout << "Three" << endl;
    }
  }
}
