#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
using Graph = vector<vector<int> >;

int main(){
  int N; cin >> N;
  vector<string>friends(N);
  for(int i=0;i<N;i++){
    cin >> friends.at(i);
  }
  Graph count(N),G(N);
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(friends.at(i).at(j)=='Y'){
        count.at(i).push_back(j);
        G.at(i).push_back(j);
      }
    }
  }
  for(int i=0;i<N;i++){
    for(int j=0;j<count.at(i).size();j++){
      for(int k=0;k<count.at(count.at(i).at(j)).size();k++){
        G.at(i).push_back(count.at(count.at(i).at(j)).at(k));
      }
    }
  }
  int ans=0;
  for(int i=0;i<N;i++){
    map<int,int> m;
    int count=0;
    for(int j=0;j<G.at(i).size();j++){
      m[G.at(i).at(j)]++;
    }
    for(auto itr=m.begin();itr != m.end();itr++){
      count++;
    }
    ans = max(ans,count-1);
  }
  cout << ans << endl;
}
