#include<iostream>
using namespace std;

int main(){
  int N;
  cin >> N;

  int count=1;
  for(int i=0;i<N;i++){
    int a;
    cin >> a;
    if(a==count){
      count++;
    }
  }
  if(count==1){
    cout << "-1" << endl;
  }
  else{
    cout << N-(count-1) << endl;
  }
}
