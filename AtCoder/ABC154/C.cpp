#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  long long N;
  cin >> N;
  bool flag=true;
  vector<int>A(N);
  for(int i=0;i<N;i++){
    cin >> A.at(i);
  }
  sort(A.begin(),A.end());

  for(int i=0;i<N-1;i++){
    if(A.at(i)==A.at(i+1)){
      flag=false;
      break;
    }
  }
  if(flag){
    cout << "YES" << endl;
  }
  else{
    cout << "NO" <<endl;
  }
}
