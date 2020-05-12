#include<iostream>
using namespace std;

int main(){
  int N,l,r;
  int count=0;

  cin >> N;
  for(int i=0;i<N;i++){
    cin >> l;
    cin >> r;
    count+=(r-l+1);
  }
  cout << count << endl;
}
