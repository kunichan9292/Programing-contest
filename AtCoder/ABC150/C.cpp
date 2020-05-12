#include<iostream>
#include<vector>
using namespace std;

int main(){
  long long N;
  cin >> N;
  vector<long long>P(N),Q(N);

  for(int i=0;i<N;i++){
    int p;
    cin >> p;
    P.at(i)=p;
  }

  for(int i=0;i<N;i++){
    int q;
    cin >> q;
    Q.at(i)=q;
  }

  for(int i=N-1;i>0;i--){
    int count=0;
    for(int j=0;j<i;j++){
      if(P.at(j)<P.at(i)){
        count++;
      }
    }
    P.at(i) -= count;
  }
  for(int i=N-1;i>0;i--){
    int count=0;
    for(int j=0;j<i;j++){
      if(Q.at(j)<Q.at(i)){
        count++;
      }
    }
    Q.at(i) -= count;
  }

  vector<long long>keisu(N-1);
  keisu.at(0)=1;
  if(N>2){
    for(int i=1;i<N-1;i++){
      keisu.at(i) = keisu.at(i-1)*(i+1);
    }
  }

  long long p,q;
  for(int i=0;i<N-1;i++){
    p += (P.at(i)-1)*keisu.at(N-2-i);
  }
  for(int i=0;i<N-1;i++){
    q += (Q.at(i)-1)*keisu.at(N-2-i);
  }

  if(p>=q){
    cout << p-q << endl;
  }
  else{
    cout << q-p << endl;
  }
}
