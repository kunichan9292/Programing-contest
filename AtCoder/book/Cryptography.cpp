#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long encrypt(vector<long long> num){
  long long MAX =0;
  for(int i=0;i<num.size();i++){
      long long seki = 1;
      for(int j=0;j<num.size();j++){
        if(i == j){
          seki *= (num.at(j)+1);
        }
        else{
          seki *= num.at(j);
        }
        MAX = max(MAX,seki);
      }
  }
  return MAX;
}

int main(){
  int N; cin >> N;
  vector<long long>num(N);
  for(int i=0;i<N;i++){
    cin >> num.at(i);
  }
  cout << encrypt(num) << endl;
}
