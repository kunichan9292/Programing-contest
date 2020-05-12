#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int N,a;
  cin >> N;
  vector<pair<int,int> >p(N);
  for(int i=0;i<N;i++){
    cin >> p.at(i).first >> p.at(i).second;
    a=p.at(i).second;
    p.at(i).second=p.at(i).first;
    p.at(i).first=a;
  }

  sort(p.begin(),p.end());

  for(int i=0;i<N;i++){
    a=p.at(i).second;
    p.at(i).second=p.at(i).first;
    p.at(i).first=a;
    cout << p.at(i).first << ' ' << p.at(i).second << endl;;
  }
}
