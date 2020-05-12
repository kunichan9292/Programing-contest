#include<iostream>
using namespace std;

int main(){
  bool flag=false;
  long long X;
  cin >> X;

  if(X==2){
    cout << '2' << endl;
  }
  else{
    for(long long i=0;;i++){
      for(long long j=2;j<X+i;j++){
        if((X+i)%j==0){
          break;
        }
        if(j==X+i-1){
          cout << X+i << endl;
          flag=true;
          break;
        }
      }
      if(flag){
        break;
      }
    }
  }
}
