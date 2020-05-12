#include<iostream>
#include<vector>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int>ai(N);
  for(int i=0;i<N;i++){
    cin >> ai.at(i);
  }
  int s=1;
  int count =0;
  for(int i=0;i<N;i++){
    s=ai.at(s-1);
    count++;
    if(s==2){
      cout << count << endl;
      break;
    }
    if(i==N-1){
      cout << "-1" << endl;
    }
  }
}
