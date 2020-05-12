#include<iostream>
using namespace std;

int main(){
  int A,B; cin >> A >> B;
  if(B == 1){
    cout << '0' << endl;
  }
  else if(A>=B){
    cout << '1' << endl;
  }
  else{
    for(int i=2;;i++){
      if((i-1)*A-i+3 <= B && B <= i*A-i+1){
        cout << i << endl;
        break;
      }
    }
  }
}
