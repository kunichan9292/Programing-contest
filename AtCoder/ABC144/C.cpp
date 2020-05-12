#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  long long N; cin >> N;
  long long MIN = N;
  for(int i=1;i*i<=N;i++){
    if(N%i == 0){
      MIN = min(N/i + i - 2,MIN);
    }
  }
  cout << MIN << endl;
}
