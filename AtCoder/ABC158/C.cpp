#include<iostream>
#include<vector>
using namespace std;

int main(){
  int A,B;
  cin >> A >> B;
  int count1=0;
  int count2=0;
  int x_s,x_e,y_s,y_e;
  for(int i=0;i<1010;i++){
    int x=i*0.08;
    int y=i*0.1;
    if(x==A){
      if(count1==0){
        x_s=i;
        count1++;
      }
      if(count1>0){
        x_e=i;
      }
    }

    if(y==B){
      if(count2==0){
        y_s=i;
        count2++;
      }
      if(count2>0){
        y_e=i;
      }
    }
  }
  int money;
  if(x_e<y_s || y_e<x_s){
    money=-1;
  }
  else if(x_s<=y_s){
    money=y_s;
  }
  else{
    money=x_s;
  }
  cout << money << endl;
}
