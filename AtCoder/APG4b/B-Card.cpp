#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int>ai(N+1,0);

  for(int i=0;i<N;i++){
    cin >> ai.at(i);
  }
  sort(ai.begin(),ai.end());
  reverse(ai.begin(),ai.end());

  int count_Alice=0,count_Bob=0;
  for(int i=0;i<(N+1)/2;i++){
    count_Alice+=ai.at(2*i);
    count_Bob+=ai.at(2*i+1);
  }
  cout << count_Alice-count_Bob << endl;
}
