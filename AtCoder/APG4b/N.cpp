#include<iostream>
#include<vector>
using namespace std;

int main (){
  int N,ave=0;
  cin >> N;
  vector<int>vec(N);
  for(int i=0;i<N;i++){
    cin >> vec.at(i);
    ave+=vec.at(i);
  }
  ave/=N;
  for(int i=0;i<N;i++){
    if(vec.at(i)-ave<0){
      cout << ave-vec.at(i) << endl;
    }
    else{
      cout << vec.at(i)-ave << endl;
    }
  }
}
