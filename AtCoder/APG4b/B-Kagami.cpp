#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int>d(N);
  for(int i=0;i<N;i++){
    cin >> d.at(i);
  }
  sort(d.begin(),d.end());
  int c=0,count=0;
  for(int i=0;i<N;i++){
    if(c<d.at(i)){
        c=d.at(i);
        count++;
    }
  }
  cout << count << endl;
}
