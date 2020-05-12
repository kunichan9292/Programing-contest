#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int>X(N);
  for(int i=0;i<N;i++){
    cin >> X.at(i);
  }
  long long min=100000000;
  for(int i=1;i<100;i++){
    long long sum=0;
    for(int j=0;j<N;j++){
      sum += (X.at(j)-i)*(X.at(j)-i);
    }
    if(sum<min){
      min=sum;
    }
  }
  cout << min << endl;
}
