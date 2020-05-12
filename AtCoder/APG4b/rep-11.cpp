#include<iostream>
using namespace std;
#define rep(i,n) for (int i=0;i<(int)(n);i++)

int main(){
  int N,A,B;
  string ennzann;
  cin >> N >> A;

  rep(i,N){
    cin >> ennzann >> B;

    if(ennzann=="+"){
      A+=B;
      cout << i+1 << ":" << A << endl;
    }
    if(ennzann=="-"){
      A-=B;
      cout << i+1 << ":" << A << endl;
    }
    if(ennzann=="*"){
      A*=B;
      cout << i+1 << ":" << A << endl;
    }
    if(ennzann=="/"){
      if(B!=0){
        A/=B;
        cout << i+1 << ":" << A << endl;
      }
      else {
        cout << "error" << endl;
        break;
      }
    }
  }
}
