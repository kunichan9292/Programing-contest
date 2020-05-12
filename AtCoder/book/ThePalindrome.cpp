#include<iostream>
using namespace std;

int main(){
  string s;
  cin >> s;
  for(int i=s.size();;i++){
    bool flag = true;
    for(int j=0;j<s.size();j++){
      if((i-j-1) < s.size() && s.at(j) != s.at(i-j-1)){
        flag = false;
        break;
      }
    }
    if(flag){
      cout << i << endl;
      break;
    }
  }
}
