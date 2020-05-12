#include<iostream>
using namespace std;

int main(){
  int N; cin >> N;
  double sum = 0;
  for(int i=0;i<N;i++){
    int A;
    cin >> A;
    sum += (double)1/A;
  }
  cout << 1/sum << endl;
}
