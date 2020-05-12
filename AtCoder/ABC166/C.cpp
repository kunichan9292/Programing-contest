#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N,M; cin >> N >> M;
  vector<long long>H(N);
  for(int i=0;i<N;i++){
    cin >> H.at(i);
  }

  vector<bool>A(N,1);
  for(int i=0;i<M;i++){
    int a,b;
    cin >> a >> b;
    if(H.at(a-1)<H.at(b-1)){
      A.at(a-1)=0;
    }
    else if(H.at(a-1)>H.at(b-1)){
      A.at(b-1)=0;
    }
    else{
      A.at(a-1)=0;
      A.at(b-1)=0;
    }
  }

  int count=0;
  for(int i=0;i<N;i++){
    if(A.at(i)) count++;
  }
  cout << count << endl;
}
