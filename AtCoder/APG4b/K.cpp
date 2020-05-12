#include<iostream>
using namespace std;
int main(){
  int A,B;
  int i=0;
  cin >> A >> B;

  cout << "A:";
  while(A>i) {
    cout << "]";
    i++;
  }
  cout << endl;
  
  i=0;
  cout << "B:";
  while(B>i){
    cout << "]";
    i++;
  }
  cout << endl;
}
