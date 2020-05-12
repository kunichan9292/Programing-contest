#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N,K,R,S,P;
  cin >> N >> K >> R >> S >> P;
  vector<pair<char,bool> >T(N+K);

  for(int i=0;i<N;i++){
    cin >> T.at(i).first;
    T.at(i).second=true;
  }
  for(int i=N;i<N+K;i++){
    T.at(i).first='a';
  }
  long long sum=0;
  for(int i=0;i<N;i++){
    if(T.at(i).second == true){
      if(T.at(i).first=='r'){
        sum += P;
      }
      if(T.at(i).first=='s'){
        sum += R;
      }
      if(T.at(i).first=='p'){
        sum += S;
      }
      if(T.at(i).first==T.at(i+K).first){
        T.at(i+K).second=false;
      }
    }
  }
  cout << sum << endl;
}
