#include<iostream>
#include<tuple>
using namespace std;

int main(){
  int N;
  cin >> N;
  tuple<int,int,int>X;
  int count=0;
  for(int i=0;i<N;i++){
    cin >> get<0>(X) >> get<1>(X) >> get<2>(X);
    if((get<0>(X)-(get<1>(X)+get<2>(X)))%2==0
        && get<0>(X)-(get<1>(X)+get<2>(X))>=0){
          count++;
    }
  }
  if(count==N) cout << "Yes" << endl;
  else cout << "No" << endl;
}
