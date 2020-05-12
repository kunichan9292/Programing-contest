#include<iostream>
using namespace std;

int main(){
  int N,M;
  cin >> N >> M;

  long long day=0;
  for(int i=0;i<M;i++){
    int a;
    cin >> a;
    day += a;
  }
  if(day<=N){
    cout << N-day << endl;
  }
  else{
    cout << "-1" << endl;
  }
}
