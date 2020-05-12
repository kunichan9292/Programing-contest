#include<iostream>
using namespace std;

int main(){
  int A,B,C,D;
  cin >> A >> B >> C >> D;

  int Tcount=0;
  int Acount=0;

  if(A%D==0){
    Tcount = A/D;
  }
  else{
    Tcount = A/D+1;
  }

  if(C%B==0){
    Acount = C/B;
  }
  else{
    Acount = C/B+1;
  }

  if(Tcount>=Acount){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
}
