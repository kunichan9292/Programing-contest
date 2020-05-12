#include<iostream>
using namespace std;
int main(){
  int N,A,B;
  string op;

  cin >> N >> A;
  for(int i=0;i<N;i++){
    cin >> op >> B;
    if(op=="+"){
      A+=B;
    }
    if(op=="-"){
      A-=B;
    }
    if(op=="*"){
      A*=B;
    }
    if(op=="/"){
      if(B!=0){
        A/=B;
      }
      else{
        cout << "error" << endl;
        break;
      }
    }
    cout << i+1 << ":" << A << endl;
  }
}
