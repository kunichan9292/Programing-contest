#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N; cin >> N;
  vector<int>A(N);
  vector<int>B(N);
  vector<int>C(N-1);
  int sum = 0;
  for(int i=0;i<N;i++){
    cin >> A.at(i);
  }
  for(int i=0;i<N;i++){
    cin >> B.at(i);
  }
  for(int i=0;i<N-1;i++){
    cin >> C.at(i);
  }
  for(int i=0;i<N;i++){
    sum += B.at(i);
  }
  for(int i=0;i<N-1;i++){
    if(A.at(i+1)-A.at(i) == 1){
      sum +=C.at(A.at(i)-1);
    }
  }
  cout << sum << endl;
}
