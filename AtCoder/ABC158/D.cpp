#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
  string first;
  cin >> first;
  deque<char> S;
  for(int i=0;i<first.size();i++){
    S.push_back(first.at(i));
  }

  int Q;
  cin >> Q;
  bool flag =true;
  for(int i=0;i<Q;i++){
    int op;
    cin >> op;
    if(op==1){
      flag = !flag;
    }
    if(op==2){
      int F;
      char C;
      cin >> F >> C;
      if(flag){
        if(F==1){
          S.push_front(C);
        }
        else{
          S.push_back(C);
        }
      }
      else{
        if(F==1){
          S.push_back(C);
        }
        else{
          S.push_front(C);
        }
      }
    }
  }
  if(!flag){
    reverse(S.begin(),S.end());
  }
  for(int i=0;i<S.size();i++){
    cout << S.at(i);
    if(i==S.size()-1){
      cout << endl;
    }
  }
}
