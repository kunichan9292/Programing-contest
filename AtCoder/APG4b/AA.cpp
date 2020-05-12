#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);

  map<int,int>table;
  for(int i=0;i<N;i++){
    cin >> A.at(i);
    if(table.count(A.at(i))){
      table.at(A.at(i))++;
    }
    else{
      table[A.at(i)]=1;
    }
  }
  int max=0; int num;
  for(int i=0;i<N;i++){
    if(max<table.at(A.at(i))){
      max=table.at(A.at(i));
      num=A.at(i);
    }
  }
  cout << num << ' ' << max << endl;
}
