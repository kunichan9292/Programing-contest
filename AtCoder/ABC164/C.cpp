#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  long long N;
  cin >> N;
  vector<string>S(N);

  for(long long i=0;i<N;i++){
    cin >> S.at(i);
  }
  sort(S.begin(),S.end());
  int count = N;
  for(int i=0;i<N-1;i++){
    if(S.at(i)==S.at(i+1)){
      count--;
    }
  }
  cout << count << endl;
}
