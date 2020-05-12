#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int>P(N),Q(N),v(N);

  for(int i=0;i<N;i++){
    cin >> P.at(i);
    v.at(i)=i+1;
  }
  for(int i=0;i<N;i++){
    cin >> Q.at(i);
  }
  int count=1;
  int p=0;
  int q=0;

  do {
    int count_p =0;
    int count_q =0;
    for (int i=0;i<N;i++){
      if(v.at(i)==P.at(i)){
        count_p++;
      }
      if(v.at(i)==Q.at(i)){
        count_q++;
      }
    }
    if(N==count_p){
      p=count;
    }
    if(N==count_q){
      q=count;
    }
    if(p!=0 && q!=0){
      break;
    }
    count++;
  } while (next_permutation(v.begin(), v.end()));
  if(p>=q){
    cout << p-q << endl;
  }
  else{
    cout << q-p << endl;
  }
}
