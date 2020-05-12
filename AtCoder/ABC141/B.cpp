#include<iostream>
using namespace std;

int main(){
  string S; cin >> S;

  bool flag = true;
  for(int i=0;i<S.size();i++){
    //奇数文字目
    if((i+1)%2 == 1 && S.at(i) == 'L'){
      flag = false;
    }
    //偶数文字目
    if((i+1)%2 == 0 && S.at(i) == 'R'){
      flag = false;
    }
    if(!flag){
      break;
    }
  }
  if(flag){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}
