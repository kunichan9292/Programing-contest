#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<pair<int,int> >city(N);
  for(int i=0;i<N;i++){
    cin >> city.at(i).first;
    cin >> city.at(i).second;
  }

  int count=1;
  for(int i=1;i<=N;i++){
    count *=i;
  }
  count = count*(N-1)/(N*(N-1)/2);
  
}
