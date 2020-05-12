#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  string S;
  cin >> S;

  if(S.size()==1 || S.size()==2 || S.size()==3){
    cout << 0 << endl;
  }
  else{
    int count=0;
    for(int i=4;i<=S.size();i++){
      for(int j=0;j<S.size()-(i-1);j++){
        string A;
        for(int k=j;k<i+j;k++){
          A += S.at(k);
        }
        long long B=stoi(A);
        if(B%2019==0){
          count++;
        }
      }
    }
  }
}
