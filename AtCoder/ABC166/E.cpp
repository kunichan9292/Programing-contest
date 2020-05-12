#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<c.math>
using namespace std;

bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

int main(){
  int N; cin >> N;
  vector<pair<int,long long> >A(N);
  for(int i=0;i<N;i++){
    A.at(i).first = i+1;
    cin >> A.at(i).second;
  }
  sort(A.begin(),A.end(),compare_by_b);
  long long count =0;
  for(int i=0;i<N-1;i++){
    for(int j=i+1;j<N;j++){
      if(abs(A.at(i).first-A.at(i).first) == A.at(i).second + A.at(i).second){
        count ++;
      }
    }
  }
  cout << count << endl;
}
