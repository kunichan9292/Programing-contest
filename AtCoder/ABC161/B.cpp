#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N,M;
  cin >> N >> M;

  vector<int>A(N);
  int all=0;
  for(int i=0;i<N;i++){
    cin >> A.at(i);
    all+=A.at(i);
  }
  int count=0;
  for(int i=0;i<N;i++){
    if(A.at(i)>=(double)all/(4*M)){
      count++;
    }
  }
  if(count>=M){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}
