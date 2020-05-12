#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int>A(5);
  for(int i=0;i<A.size();i++){
    cin >> A.at(i);
  }
  for(int i=0;i<4;i++){
    if(A.at(i)==A.at(i+1)){
      cout << "YES" <<endl;
      break;
    }
    if(i==3){
      cout << "NO" << endl;
    }
  }
}
