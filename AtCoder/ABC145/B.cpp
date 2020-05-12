#include<iostream>
using namespace std;

int main(){
  int N;
  string S1,S2;
  cin >> N;
  if(N%2==0){
    for(int i=1;i<=N/2;i++){
      char c;
      cin >> c;
      S1 += c;
    }
    for(int i=1;i<=N/2;i++){
      char c;
      cin >> c;
      S2 += c;
    }
    if(S1==S2){
      cout << "Yes" << endl;
    }
    else{
      cout << "No" << endl;
    }
  }
  else{
    cout << "No" << endl;
  }
}
