#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main(){
  int N,K;
  cin >> N >> K;
  vector<double>p(N);
  for(int i=0;i<N;i++){
    cin >> p.at(i);
    p.at(i) =0.5*p.at(i)+0.5;
  }

  vector<double>sum(N+1);
  sum.at(0)=0;
  for(int i=1;i<N+1;i++){
    sum.at(i)=sum.at(i-1)+p.at(i-1);
  }
  double max=0;
  for(int i=0;i<N-K+1;i++){
    if(max<sum.at(K+i)-sum.at(i)){
      max=sum.at(K+i)-sum.at(i);
    }
  }
  cout << fixed << setprecision(1) << max << endl;
}
