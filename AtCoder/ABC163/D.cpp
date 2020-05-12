#include<iostream>
#include<vector>
using namespace std;

int sum(int x){
  if(x==0){
    return 0;
  }

  return sum(x-1)+x;
}

int main(){
  int N,K;
  cin >> N >> K;
  long long count =0;
  vector<int>wa(N+1);
  for(int i=0;i<=N;i++){
    wa.at(i)=sum(i);
  }
  for(int i=K;i<=N;i++){
    count += wa.at(N) - wa.at(N-i) -wa.at(i-1)+1;
  }
  cout << (count+1)%1000000007 << endl;
}
