#include<iostream>
using namespace std;

int main(){
  long long N;
  string S;
  cin >> N >> S;
  long long count=0; long long R_count=0; long long G_count=0; long long B_count=0;
  for(int i=0;i<N;i++){
    if(S.at(i)=='R'){
      R_count++;
    }
    else if(S.at(i)=='G'){
      G_count++;
    }
    else{
      B_count++;
    }
  }

  if(N%2==0){
    for(int i=1;i<N/2;i++){
      for(int j=0;j<N-2*i;j++){
        if(S.at(j)!=S.at(i+j) && S.at(i+j)!=S.at(2*i+j) && S.at(j)!=S.at(2*i+j)){
          count++;
        }
      }
    }
  }
  else{
    for(int i=1;i<(N+1)/2;i++){
      for(int j=0;j<N-2*i;j++){
        if(S.at(j)!=S.at(i+j) && S.at(i+j)!=S.at(2*i+j) && S.at(j)!=S.at(2*i+j)){
          count++;
        }
      }
    }
  }
  cout << R_count*G_count*B_count-count << endl;
}
