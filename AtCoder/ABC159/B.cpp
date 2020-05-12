#include<iostream>
using namespace std;

int main(){
  string S;
  cin >> S;
  bool flag = true;
  int N = S.size();
  for(int i=0;i<(N-1)/2;i++){
    if(S.at(i)!=S.at(N-1-i)){
      flag=false;
    }
  }
  for(int i=0;i<(N-1)/4;i++){
    if(S.at(i)!=S.at((N-3)/2-i)){
      flag=false;
    }
  }
  for(int i=0;i<(N-1)/4;i++){
    if(S.at((N+1)/2+i)!=S.at(N-1-i)){
      flag=false;
    }
  }
  if(flag){
    cout << "Yes" << endl;
  } else{
    cout << "No" << endl;
  }
}
