#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int K;
  cin >> K;
  int sum=0;
  for(int i=0;i<K;i++){
    for(int j=0;j<K;j++){
      for(int k=0;k<K;k++){
        sum+=gcc(gcc(i+1,j+1),k+1);
      }
    }
  }
  cout << sum << endl;
}
