#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N,K;
  cin >> N >> K;
  vector<int>sunuke(N);
  for(int i=0;i<K;i++){
    int d;
    cin >> d;
    for(int j=0;j<d;j++){
      int A;
      cin >> A;
      sunuke.at(A-1) ++;
    }
  }

  int count = 0;
  for(int i=0;i<N;i++){
    if(sunuke.at(i)==0){
      count++;
    }
  }
  cout << count << endl;
}
