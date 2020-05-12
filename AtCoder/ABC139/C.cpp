#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N; cin >> N;
  vector<int>H(N);
  for(int i=0;i<N;i++){
    cin >> H.at(i);
  }
  vector<int>S(N);
  S.at(N-1)=0;
  for(int i=N-1;i>0;i--){
    if(H.at(i)-H.at(i-1) > 0){
      S.at(i-1)=0;
    }
    else{
      S.at(i-1) = S.at(i) + 1;
    }
  }
  int MAX = 0;
  for(int i=0;i<N;i++){
    if(S.at(i)>MAX){
      MAX = S.at(i);
    }
  }
  cout << MAX << endl;
}
