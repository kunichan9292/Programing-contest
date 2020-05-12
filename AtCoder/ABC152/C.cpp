#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int>P(N);
  for(int i=0;i<N;i++){
    cin >> P.at(i);
  }
  int min=P.at(0);
  int count=1;
  for(int i=1;i<N;i++){
    if(min>=P.at(i)){
      min=P.at(i);
      count++;
    }
  }
  cout << count << endl;
}
