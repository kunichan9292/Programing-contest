#include<iostream>
using namespace std;

int main(){
  string S1,S2;
  cin >> S1;

  int count=0;
  for(int i=0;i<S1.size();i++){
    S2 +=S1.at(S1.size()-1-i);
    if(S1.at(i)!=S2.at(i)){
      count++;
    }
  }
  cout << count/2 << endl;
}
