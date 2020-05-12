#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N;
  cin >> N;
  long count=0;
  for(int i=0;i<N;i++){
    if((i+1)%15!=0 && (i+1)%5!=0 && (i+1)%3!=0){
      count+=i+1;
    }
  }
  cout << count << endl;
}
