#include<iostream>
using namespace std;

int main(){
  string S;
  cin >> S;

  int count_p=0;
  int count_m=0;

  for(int i=0;i<S.size();i++){
    if(S.at(i)=='+'){
      count_p++;
    }
    else if(S.at(i)=='-'){
      count_m++;
    }
  }

  cout << 1-count_m+count_p << endl;
}
