#include<iostream>
using namespace std;

int main(){
  int H,N;
  cin >> H >> N;
  int Attack=0;
  int A;
  for(int i=0;i<N;i++){
    cin >> A;
    Attack += A;
  }
  if(Attack>=H){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}
