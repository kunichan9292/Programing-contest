#include<iostream>
using namespace std;

int main(){
  int N,A,count;
  int count_min=9999;
  cin >> N;

  for(int i=0;i<N;i++){
    count=0;
    cin >> A;
    while(A%2==0){
      A=A/2;
      count++;
    }
    if(count<count_min){
      count_min=count;
    }
  }
  cout << count_min << endl;
}
