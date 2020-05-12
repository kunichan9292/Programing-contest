#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main(){
  int N; cin >> N;
  map<string,int>m;
  for(int i=0;i<N;i++){
    string s;
    cin >> s;
    m[s]++;
  }
  int MAX=0;
  for(auto itr=m.begin();itr!=m.end();itr++){
    MAX = max(MAX,itr->second);
  }
  for(auto itr=m.begin();itr!=m.end();itr++){
    if(itr->second == MAX){
      cout << (itr->first) << endl;
    }
  }
}
