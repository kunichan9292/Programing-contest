#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N,K,Q;
  cin >> N >> K >> Q;
  vector<int>P(N,K-Q);
  for(int i=0;i<Q;i++){
    int ans;
    cin >> ans;
    P.at(ans-1)++;
  }
  for(int i=0;i<N;i++){
    if(P.at(i)>0){
      cout << "Yes" << endl;
    }
    else{
      cout << "No" << endl;
    }
  }
}
