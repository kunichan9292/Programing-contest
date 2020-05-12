#include<iostream>
using namespace std;

int main(){
  string S;
  cin >> S;
  int day=0;
  if(S=="SUN"){
    day=7;
  }else if(S=="MON"){
    day=6;
  }else if(S=="TUE"){
    day=5;
  }else if(S=="WED"){
    day=4;
  }else if(S=="THU"){
    day=3;
  }else if(S=="FRI"){
    day=2;
  }else if(S=="SAT"){
    day=1;
  }
  cout << day << endl;
}
