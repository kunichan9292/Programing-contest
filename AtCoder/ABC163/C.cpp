#include<iostream>
#include<vector>
using namespace std;

int main(){
  long long N;
  cin >> N;
  vector<int>number(N-1,0);
  for(int i=0;i<N-1;i++){
    int input;
    cin >> input;
    number.at(input-1)++;
  }
  for(int i=0;i<N-1;i++){
    cout << number.at(i) << endl;
  }
  cout << '0' << endl;
}
