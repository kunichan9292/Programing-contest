#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int>A(N);
  vector<int>count(N);
  for(int i=0;i<N;i++){
    cin >> A.at(i);
    count.at(A.at(i)-1)++;
  }
  long long all=0;
  for(int i=0;i<N;i++){
    if(count.at(i)<2) continue;
    all+=count.at(i)*(count.at(i)-1)/2;
  }
  vector<long long>ans(N);
  for(int i=0;i<N;i++){
    ans.at(i)=all-(count.at(A.at(i)-1)-1);
    cout << ans.at(i) << endl;
  }
}
