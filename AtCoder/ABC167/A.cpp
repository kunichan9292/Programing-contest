#include<iostream>
using namespace std;

int main(){
  string S,T;
  cin >> S >> T;
  bool flag = true;
  for(int i=0;i<S.size();i++){
    if(S.at(i) != T.at(i)) flag = false;
  }
  if(S.size()+1 != T.size()) flag = false;
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
}
