#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N;
  long long K;
  cin >> N >> K;
  vector<int>A(N+1);
  for(int i=1;i<=N;i++){
    cin >> A.at(i);
  }
  vector<int>loop;
  bool flag = true;
  int a=1;
  while(flag){
    for(int i=0;i<loop.size();i++){
      if(a == loop.at(i)){
        flag = false;
        break;
      }
    }
    if(flag){
      loop.push_back(a);
      a=A.at(a);
    }
  }
  long long start;
  for(int i=0;i<loop.size();i++){
    if(loop.at(i) == a){
      start = i;
      break;
    }
  }
  long long looplength = loop.size()-start;
  long long s =(K-start)%looplength;
  cout << loop.at(start + s) << endl;
}
