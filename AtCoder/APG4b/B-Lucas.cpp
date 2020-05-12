#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<long>L(N+1);
  L.at(0)=2;
  L.at(1)=1;

  if(N==1){
    cout << L.at(1) << endl;
  }
  else{
    for(int i=1;i<N;i++){
      L.at(i+1)=L.at(i)+L.at(i-1);
    }
    cout << L.at(N) << endl;
  }
}
